import requests

import sqlite3

db_path = "DB.db"

class Datenbank():

    def __init__(self, id:int, name:str, foto:None, text:None):
            self.id = id
            self.name = name
            self.foto = foto
            self.text = text

    @classmethod
    def erstelleDB(cls):
        db = sqlite3.connect(db_path)
        c = db.cursor()
        c.execute(
           "CREATE TABLE IF NOT EXISTS " +
            "datenbank(id INTEGER PRIMARY KEY, " +
            "name TEXT, " +
            "foto TEXT, " +
            "text TEXT)")
            
        db.commit()
        c.close()

    def speichern(self):
        db = sqlite3.connect(db_path)
        c = db.cursor()
        if self.id is None:                    
            c.execute(f"INSERT INTO datenbank VALUES(null, '{self.name}', '{self.foto}', '{self.text}')")
        else:           
            c.execute(
                f"UPDATE datenbank SET name='{self.name}' WHERE id={self.id}")
        db.commit()
        c.close()

    def getTextmitPartner(nameMY, partnername):
        db = sqlite3.connect(db_path)
        c = db.cursor()
        result =  c.execute(f"SELECT text FROM datenbank WHERE name='{nameMY}' OR name = '{partnername}'").fetchall()
        db.commit()
        c.close()
        return result
    def getTextohnePartner(nameMY):
        db = sqlite3.connect(db_path)
        c = db.cursor()
        result =  c.execute(f"SELECT text FROM datenbank WHERE name='{nameMY}'").fetchall()
        db.commit()
        c.close()
        return result



    @classmethod
    def getText(cls):
       db = sqlite3.connect(db_path)
       c = db.cursor()
       result =  c.execute(f"SELECT text FROM datenbank").fetchall()
       db.commit()
       c.close()
       return result


        
    def erstelleDbObjekt(self):
        datenbank={}
        datenbank['name'] = self.name
        datenbank['id'] = self.id
        datenbank['foto'] = self.foto
        datenbank['text'] = self.text
        return datenbank
