import numpy as np
import matplotlib.pyplot as plt

datos=np.transpose(np.genfromtxt("advection.txt",delimiter=" "))
mini=np.linspace(-2,2,num=400,endpoint=True)

plt.figure(figsize=(18,9))
plt.subplot(5,2,1)
plt.plot(mini,datos[:,0])
plt.title("Backward Difference (c=1)")
plt.ylabel("t= 0.00 s")

plt.subplot(5,2,2)
plt.plot(mini,datos[:,5])
plt.title("Forward difference (c=1)")

plt.subplot(5,2,3)
plt.plot(mini,datos[:,1])
plt.ylabel("t= 0.14 s")

plt.subplot(5,2,4)
plt.plot(mini,datos[:,6])

plt.subplot(5,2,5)
plt.plot(mini,datos[:,2])
plt.ylabel("t= 0.28 s")

plt.subplot(5,2,6)
plt.plot(mini,datos[:,7])

plt.subplot(5,2,7)
plt.plot(mini,datos[:,3])
plt.ylabel("t= 0.42 s")

plt.subplot(5,2,8)
plt.plot(mini,datos[:,8])

plt.subplot(5,2,9)
plt.plot(mini,datos[:,4])
plt.ylabel("t= 0.56 s")

plt.subplot(5,2,10)
plt.plot(mini,datos[:,9])

plt.savefig("NicolasManrique_graph.pdf")
