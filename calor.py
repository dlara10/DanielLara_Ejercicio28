import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt("calor.dat")
                       
x = datos[:,0]
y = datos[:,1]

n_pointsx= int(np.sqrt(len(x)))
gridx= np.reshape(data, (n_pointsx,n_pointsx))
                       

plt.figure()
plt.imshow(gridx)
plt.xlabel("X")
plt.ylabel("Y")
plt.colorbar(label="Temperatura")
plt.savefig("calor.pnh")
plt.imshow(x)