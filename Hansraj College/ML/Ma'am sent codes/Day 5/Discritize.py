# -*- coding: utf-8 -*-
"""
Created on Sat Jan 15 11:57:48 2022

@author: asus
"""

from sklearn.preprocessing import Binarizer
import numpy as np
age = np.array([[6], 
                [12], 
                [20], 
                [36], 
                [65]])
# Create binarizer
binarizer = Binarizer(18)

# Transform feature
binarizer.fit_transform(age)

np.digitize(age, bins=[20,30,64])
