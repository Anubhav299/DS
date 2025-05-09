# -*- coding: utf-8 -*-
"""
Created on Sat Jan 15 12:08:16 2022

@author: asus
"""

import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

wat=pd.read_csv("Water.csv",header=None)
wat.drop([10],axis=1,inplace=True)
wat.dropna(inplace=True)
wat
wat.isnull().sum()
wat.shape

x = np.array(wat.iloc[:,:9])
x
y=np.array(wat.loc[:,9])
y

from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2)

print("total training: ",y_train.size)
print("class1: ",np.sum(y_train))
print("class0: ", y_train.size-np.sum(y_train))
print("")

print("total test: ",y_test.size)
print("class1: ",np.sum(y_test))
print("class0: ", y_test.size-np.sum(y_test))
