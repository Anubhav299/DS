# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 11:22:24 2022

@author: BALJEET KAUR
"""

#https://jakevdp.github.io/PythonDataScienceHandbook/05.07-support-vector-machines.html

import numpy as np
import matplotlib.pyplot as plt
from scipy import stats
import sklearn 
from sklearn import datasets
# use seaborn plotting defaults
import seaborn as sns; sns.set()

#step 1
# from sklearn.datasets.samples_generator import make_blobs
X, y = sklearn.datasets.make_blobs(n_samples=50, centers=2,
                  random_state=0, cluster_std=0.35)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn');


#step 2
xfit = np.linspace(-1, 3.5)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
plt.plot([0.6], [2.1], 'x', color='black', markeredgewidth=2, markersize=10)

for m, b in [(1, 0.65)]:
    plt.plot(xfit, m * xfit + b, '-k')
plt.xlim(-1, 3.5);

#step 3

xfit = np.linspace(-1, 3.5)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
plt.plot([0.6], [2.1], 'x', color='black', markeredgewidth=2, markersize=10)


for m, b in [ (0.5, 1.6)]:
    plt.plot(xfit, m * xfit + b, '-k')
xfit = np.linspace(-1, 3.5)

#step 4

plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
plt.plot([0.6], [2.1], 'x', color='black', markeredgewidth=2, markersize=10)
plt.xlim(-1, 3.5);
    
for m, b in [ (-0.2, 2.9)]:
    plt.plot(xfit, m * xfit + b, '-k')
plt.xlim(-1, 3.5);


#step 5
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
plt.plot([0.6], [2.1], 'x', color='black', markeredgewidth=2, markersize=10)
plt.xlim(-1, 3.5);
    
for m, b in [(1, 0.65), (0.5, 1.6), (-0.2, 2.9)]:
    plt.plot(xfit, m * xfit + b, '-k')
plt.xlim(-1, 3.5);

#step 6


xfit = np.linspace(-1, 3.5)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')

for m, b, d in [(1, 0.65, 0.33), (0.5, 1.6, 0.55), (-0.2, 2.9, 0.2)]:
    yfit = m * xfit + b
    plt.plot(xfit, yfit, '-k')
    plt.fill_between(xfit, yfit - d, yfit + d, edgecolor='none',
                     color='#AAAAAA', alpha=0.4)

plt.xlim(-1, 3.5);
