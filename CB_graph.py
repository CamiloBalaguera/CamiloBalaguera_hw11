import matplotlib.pyplot as plt
import numpy as np

tiempo = np.genfromtxt("tray.txt", usecols = (2))
posicion = np.genfromtxt("tray.txt", usecols = (0))
velocidad = np.genfromtxt("tray.txt", usecols = (1))

plt.figure()
plt.plot(tiempo, posicion, label = "x vs t")
plt.xlabel("Tiempo")
plt.ylabel("Posición")
plt.legend()
plt.savefig("pos.png")
plt.figure()
plt.plot(tiempo, velocidad, label = "v vs t")
plt.xlabel("Tiempo")
plt.ylabel("Velocidad")
plt.semilogx()
plt.legend()
plt.savefig("vel.png")
plt.figure()
plt.plot(posicion, velocidad, label = "v vs x")
plt.xlabel("Posición")
plt.semilogx()
plt.ylabel("Velocidad")
plt.legend()
plt.savefig("phase.png")

