import numpy as np
import matplotlib.pyplot as plt
import numpy.linalg as la
import pandas as pd

x = np.linspace(0,10,1000)
y = np.sin(x)
print(plt.plot(x,y))

# print(pd.__version__)
# A = pd.Series([2,3,4,5])
# marks = {'A': 56, 'B':45, 'C':89}

# grads = {'A':5, 'A-':4,'B':3}
# D = pd.DataFrame({'marks':marks,'grades':grads})
# print(D[D['marks']>60])

