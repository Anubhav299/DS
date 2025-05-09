
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.feature_selection import SelectKBest
from sklearn.feature_selection import chi2, f_regression
from sklearn.feature_selection import SelectPercentile

from numpy import array 
 
 
hf = pd.read_csv("S:\ML\Project\HOHE.csv")
hf

x = np.array(hf.iloc[:,:18])
x
y = np.array(hf.iloc[:,18])
y

from sklearn.model_selection import train_test_split
x_train, x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)

def correlation(dataset, threshold):
    col_corr = set()
    corr_matrix = hf.corr()
    for i in range(len(corr_matrix.columns)):
        for j in range(i):
            if corr_matrix.iloc[i, j] > threshold:
                colname = corr_matrix.columns[i]
                col_corr.add(colname)
    return col_corr

corr_features = correlation(x_train,0.8)
print(len(set(corr_features)))
print(corr_features)
