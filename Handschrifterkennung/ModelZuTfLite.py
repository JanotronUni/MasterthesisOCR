import string
from tokenize import String
from tensorflow.keras.layers.experimental.preprocessing import StringLookup
from email.mime import image
from tensorflow import keras
import numpy as np
import tensorflow as tf
import cv2 as cv2
import os
import matplotlib.pyplot as plt
import pandas as pd
from tensorflow import lite
#In load_model wird muss der Dateipfad zu dem Ordner, in dem das Model
#gespeichert eingefuegt.
model = keras.models.load_model("")
prediction_model = keras.models.Model(
    model.get_layer(name="image").input, model.get_layer(name="dense2").output
)
converter = tf.lite.TFLiteConverter.from_keras_model(prediction_model)
converter.optimizations = [tf.lite.Optimize.DEFAULT]
converter.experimental_new_converter=True
converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS,
tf.lite.OpsSet.SELECT_TF_OPS]
tf_lite_model = converter.convert()
#Der Dateipfad zu dem Ordner, in dem das TfLite-Model gespeichert werden soll,
#muss in dem ersten Teil von der folgenden Funktion eingefuegt werden.
open('', 'wb').write(tf_lite_model)
