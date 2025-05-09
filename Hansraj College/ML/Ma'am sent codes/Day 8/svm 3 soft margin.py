# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 12:06:42 2022

@author: BALJEET KAUR
"""


from sklearn.svm import SVC
import numpy as np
import matplotlib.pyplot as plt
from scipy import stats
from sklearn import metrics

# use seaborn plotting defaults
import seaborn as sns; sns.set()

#step 1
from sklearn.datasets.samples_generator import make_blobs


X, y = make_blobs(n_samples=100, centers=2,
                  random_state=0, cluster_std=1.2)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn');

#Step 2

X, y = make_blobs(n_samples=100, centers=2,
                  random_state=0, cluster_std=1.2)

fig, ax = plt.subplots(1, 2, figsize=(16, 6))
fig.subplots_adjust(left=0.0625, right=0.95, wspace=0.1)

for axi, C in zip(ax, [100.0, 0.01]):
    model = SVC(kernel='linear', C=C).fit(X, y)
    axi.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
    plot_svc_decision_function(model, axi)
    axi.scatter(model.support_vectors_[:, 0],
                model.support_vectors_[:, 1],
                s=300, lw=1, facecolors='none');
    axi.set_title('C = {0:.1f}'.format(C), size=14)
    y_hat=model.predict(X) 
    test_accuracy=metrics.accuracy_score(y,y_hat)*100
    print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )
