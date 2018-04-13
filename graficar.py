import numpy as np
import matplotlib.pyplot as plt


x=np.genfromtxt("datos.txt",usecols=(0,1))
y=np.genfromtxt("datos.txt",usecols=(0,2))

plt.plot(np.transpose(x)[0][:79],np.transpose(x)[1][:79],label="S1(t)")
plt.plot(np.transpose(y)[0][:79],np.transpose(y)[1][:79],label="I1(t)")
plt.plot(np.transpose(x)[0][101:-22],np.transpose(x)[1][101:-22],label="S2(t)")
plt.plot(np.transpose(y)[0][101:-22],np.transpose(y)[1][101:-22],label="I2(t)")
plt.legend()
plt.savefig("SIR.pdf")

