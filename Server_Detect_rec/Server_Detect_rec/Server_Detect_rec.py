import base64
import numpy as np
import os
import cv2 as cv2
import easyocr
import json
from flask import Flask, jsonify, request
from datenbank import Datenbank
Datenbank.create_table
texte = []
ausgabe ="";
 
workingOnOCR = False
def hatPartner(name):
    if name == "personid1":
        return True
    if name =="personid2":
        return True
    if name =="personid3":
        return True
    if name =="personid4":
        return True
    else:
        return False

def getPartnerName(name):
    if name=="personid1": 
        return "personid2"
    if name =="personid2":
        return "personid1"
    if name =="personid3":
        return "personid4"
    if name =="personid4":
        return "personid3"
    else:
       return "ERROR"

counter2 =0
bilder =[]
niedrigeProb = []
reader = easyocr.Reader(['en'])
def recognize_text(img):
    '''loads an image and recognizes text.'''   
    return reader.readtext(img)
   
def overlay_ocr_text(img):
    texte.clear 
    img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)  
    counter=0
    result = recognize_text(img)
    for (bbox, text, prob) in result:
       
            print(f'Detected text: {text} (Probability: {prob:.2f})')
            
            texte.append(text)
            if prob< 0.85:
                niedrigeProb.append(counter) 
                (top_left, top_right, bottom_right, bottom_left) = bbox
                y = int(top_left[1])
                x = int(top_left[0])
                h = int(top_left[1])-int(bottom_left[1])
                w = int(top_left[0])-int(bottom_right[0])
                top_left = (int(top_left[0]), int(top_left[1]))
                bottom_right = (int(bottom_right[0]), int(bottom_right[1]))
                crop = img[y:y-h, x:x-w]            
                img_endoce = cv2.imencode('.png', crop)[1]
                pls = base64.b64encode(img_endoce)
                test = pls.decode('utf-8')
                bilder.append(test)
                
                for niedrig in niedrigeProb:
                    print(niedrig)
            counter = counter +1
            print(texte)

app = Flask(__name__)
@app.route("/sendeFoto", methods=["POST"])
def verarbeiteFoto():
    return startOCR()

def startOCR():
    json = request.get_json()
    if not json:        
        return "Keine Daten erhalten"
    global workingOnOCR
    workingOnOCR =True
    global name
    name= json.get('name')
    print(name)
    global foto
    foto = json.get('foto')
    #setzeFoto(foto)
   # text = json.get('text')
    if not name or not foto:
        return "Name oder Foto fehlen"
    test = base64.b64decode(foto)
    pngnp = np.frombuffer(test, np.uint8)
    img = cv2.imdecode(pngnp, cv2.IMREAD_COLOR)
    img = cv2.rotate(img, cv2.ROTATE_90_CLOCKWISE)
    texte.clear()   
    overlay_ocr_text(img)
    
    ausgabe =""
    for t in texte:
        ausgabe = ausgabe +"". join(t)
        ausgabe = ausgabe + " "  
    workingOnOCR =False
    return "OCR wurde gestartet und ist ferig"

@app.route("/checkServerStatus")
def getServerStatus():
    if workingOnOCR:
        return "Server beschaeftigt"
    else:
        return "Server frei"

@app.route("/text", methods=["POST"] )
def gettext():
    json = request.get_json()
    if not json:        
        return "Keine Daten erhalten"
    name = json.get('name')
    print(name)
    if (hatPartner(name) ==False):
        results = Datenbank.getTextohnePartner(name)
    else:
        results = Datenbank.getTextmitPartner(name, getPartnerName(name))
    ausgabe = "";
    for result in results:
        ausgabe = ausgabe +"".join(str(result)[2:-3]) +" "
    return jsonify(ausgabe), 200


@app.route("/fotoAnzeigen")
def temp(): 
    if workingOnOCR:
        return "working"
    if not bilder:        
        return "Alle Bilder verarbeitet"
    else:        
        tempBild = bilder[0]
        del bilder[0]
        return (tempBild)

@app.route("/getFinalText")
def getFinalText():
    ausgabe ="";
    for t in texte:
            ausgabe = ausgabe +"". join(t)
            ausgabe = ausgabe + " "
    return ausgabe
@app.route("/setFinalText", methods=["POST"])
def setFinalText():
    json = request.get_json()
    if not json:        
        return "Keine Daten erhalten"
    text = json.get('text')
    datenbank = Datenbank(None, name,foto,text)
    datenbank.save()
    return "Geklappt"

@app.route("/sendeText", methods=["POST"])
def textAendern():
    json = request.get_json()
    if not json:        
        return "Keine Daten erhalten"
    text = json.get('text')
    if(niedrigeProb):
        print(niedrigeProb[0])
        texte[int(niedrigeProb[0])] = text
        del niedrigeProb[0]
    return "Alles geklappt"

if __name__ == '__main__':
    Datenbank.create_table()
    app.run(host='192.168.0.220',port = 8000,debug=True)
