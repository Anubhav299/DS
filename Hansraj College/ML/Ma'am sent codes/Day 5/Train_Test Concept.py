# -*- coding: utf-8 -*-
"""
Created on Sat Jan 15 11:55:42 2022

@author: asus
"""

import numpy as np
#making balanced dataset
x=np.array(range(1,41))
y=np.ones(20)
y=np.append(y,np.zeros(20))
x
y

#work with random_state stratify and shuffle
from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2,
                                                    stratify=y)

print("total training: ",y_train.size)
print("class1: ",np.sum(y_train))
print("class0: ", y_train.size-np.sum(y_train))
print("")

print("total test: ",y_test.size)
print("class1: ",np.sum(y_test))
print("class0: ", y_test.size-np.sum(y_test))

#making imbalanced dataset
x=np.array(range(1,41))
y=np.ones(26)
y=np.append(y,np.zeros(14))

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2,
                                                    stratify=y)

print("total training: ",y_train.size)
print("class1: ",np.sum(y_train))
print("class0: ", y_train.size-np.sum(y_train))
print("")

print("total test: ",y_test.size)
print("class1: ",np.sum(y_test))
print("class0: ", y_test.size-np.sum(y_test))