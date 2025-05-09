# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 11:41:09 2022

@author: asus
"""

from sklearn import datasets
from sklearn.model_selection import cross_val_score
import numpy as np


breast_cancer = datasets.load_breast_cancer()
x=breast_cancer.data
y=breast_cancer.target

from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
knn=KNeighborsClassifier(n_neighbors=5)

#sample 1
cv_scr=cross_val_score(knn, x, y, cv=10)
print(cv_scr)
print(np.mean(cv_scr))
print(np.std(cv_scr))

#sample 2
from sklearn.model_selection import ShuffleSplit
#cv = ShuffleSplit(n_splits=5, test_size=0.3, random_state=0)
cv = ShuffleSplit(n_splits=10, test_size=0.1)
cv_scr=cross_val_score(knn, x, y, cv=cv)
print(cv_scr)
print(np.mean(cv_scr))
print(np.std(cv_scr))

#sample 3
from sklearn.model_selection import KFold
# prepare the cross-validation procedure
cv = KFold(n_splits=10,  shuffle=True)
# evaluate model
cv_scr=cross_val_score(knn, x, y, cv=cv)
print(cv_scr)
print(np.mean(cv_scr))
print(np.std(cv_scr))