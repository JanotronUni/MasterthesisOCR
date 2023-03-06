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
image_width = 128
image_height = 32
from tensorflow import lite

model3 = keras.models.load_model("C:/Users/Jan/Desktop/fuerholland2")
prediction_model = keras.models.Model(
    model3.get_layer(name="image").input, model3.get_layer(name="dense2").output
)
converter = tf.lite.TFLiteConverter.from_keras_model(prediction_model)

converter.optimizations = [tf.lite.Optimize.DEFAULT]
converter.experimental_new_converter=True
converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS,
tf.lite.OpsSet.SELECT_TF_OPS]
tf_lite_model = converter.convert()
open('C:/Users/Jan/Desktop/Endversion/ocr_dr.tflite', 'wb').write(tf_lite_model)