# pset 4 done in python

from PIL import Image, ImageFilter

before = Image.open("courtyard.bmp")
after= before.filter(ImageFilter.BLUR)
after.save("out.bmp")