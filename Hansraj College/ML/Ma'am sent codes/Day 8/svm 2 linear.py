# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 11:43:07 2022

@author: BALJEET KAUR
"""


import numpy as np
import matplotlib.pyplot as plt
from scipy import stats
import sklearn

# use seaborn plotting defaults
import seaborn as sns; sns.set()

#step 1
X, y = sklearn.datasets.make_blobs(n_samples=50, centers=2,
                  random_state=0, cluster_std=0.60)

from sklearn.svm import SVC # "Support vector classifier"
model = SVC(kernel='linear')    #C=0.1, 0.001, 10, 10000 see the difference, since they are linearly searable high C does not chnage the separating hyperplane
model.fit(X, y);

plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')



def plot_svc_decision_function(model, ax=None, plot_support=True):
    """Plot the decision function for a 2D SVC"""
    if ax is None:
        ax = plt.gca()
    xlim = ax.get_xlim()
    ylim = ax.get_ylim()
    
    # create grid to evaluate model
    x = np.linspace(xlim[0], xlim[1], 30)
    y = np.linspace(ylim[0], ylim[1], 30)
    Y, X = np.meshgrid(y, x)
    xy = np.vstack([X.ravel(), Y.ravel()]).T
    P = model.decision_function(xy).reshape(X.shape)
    
    # plot decision boundary and margins
    ax.contour(X, Y, P, colors='k',
               levels=[-1, 0, 1], alpha=0.5,
               linestyles=['--', '-', '--'])
    
    # plot support vectors
    if plot_support:
        ax.scatter(model.support_vectors_[:, 0],
                   model.support_vectors_[:, 1],
                   s=300, linewidth=1, facecolors='none');
    ax.set_xlim(xlim)
    ax.set_ylim(ylim)

plot_svc_decision_function(model);