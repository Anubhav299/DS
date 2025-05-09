# -*- coding: utf-8 -*-
"""
Created on Sat Jan 15 12:00:30 2022

@author: asus
"""

from sklearn import datasets
import matplotlib.pyplot as plt

iris= datasets.load_iris()
x=iris.data


import numpy as np
from sklearn.preprocessing import MinMaxScaler
data = np.array([[-1, 1], [-0.5, 18], [0, 12], [1, 2]])
scaler = MinMaxScaler((10,100))
print(scaler.fit_transform(data))

#IRIS
scaler = MinMaxScaler((0,1))
x_scale=scaler.fit_transform(x)
print(x_scale)


from sklearn.preprocessing import StandardScaler
#data = [[0, 0], [0, 0], [1, 1], [1, 1]]
data = np.array([[10, 12], [15, 16], [11, 20], [16, 11],[12, 14], [18, 20], [1, 2], [17, 17]])
scaler = StandardScaler()
print(scaler.fit_transform(data))




#IRIS
scaler = StandardScaler()
print(scaler.fit_transform(x))


# Load libraries
from sklearn.preprocessing import Normalizer
import numpy as np
# Create feature matrix
X = np.array([[0.5, 0.5], 
              [1.1, 3.4], 
              [1.5, 20.2], 
              [1.63, 34.4], 
              [10.9, 3.3]])
# Create normalizer
normalizer = Normalizer(norm='l2')

# Transform feature matrix
normalizer.transform(X)
