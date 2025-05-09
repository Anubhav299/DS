

from sklearn import datasets
from sklearn.model_selection import cross_val_score
import numpy as np
#import matplotlib.pyplot as plt

wine = datasets.load_wine()
x=wine.data
y=wine.target

from sklearn.neighbors import KNeighborsClassifier
#from sklearn import metrics
from sklearn.model_selection import ShuffleSplit

from IPython import get_ipython
get_ipython().magic('clear')

w_range=['uniform','distance']
p_range=[1,2]
k_range=range(1,10)
for k in w_range:
    for j in p_range:
        for i in k_range:
            knn=KNeighborsClassifier(n_neighbors=i,p=j,weights=k)
            cv = ShuffleSplit(n_splits=10, test_size=0.2)
            cv_scr=cross_val_score(knn, x, y, cv=cv)
            print("*******************")
            print(i)
            print(j)
            print(k)
            print(cv_scr)
            print(np.mean(cv_scr))
            print("--------------------")
