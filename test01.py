from copy import copy
import numpy as np
import matplotlib.pyplot as plt
from scipy.misc import face

def block_mean(image, by_size = 8, bx_size = 8):
    result = image.copy()

    for i in range(0, image.shape[0], by_size):
        for j in range(0, image.shape[1], bx_size):
            sub = result[i:i+by_size, j:j+bx_size]
            sub[:] = sub.mean()
            

    return result
    

image = face(True)

plt.subplot(121)
plt.imshow(image, cmap="gray")
plt.subplot(122)
result = block_mean(image, 64, 64)
plt.imshow(result, cmap="gray")
plt.show()