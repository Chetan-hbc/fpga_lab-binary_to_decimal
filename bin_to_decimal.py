import RPi.GPIO as GPIO
import time
import numpy as np
import matplotlib.pyplot as plt


GPIO.setmode(GPIO.BOARD)
GPIO.setup(12, GPIO.OUT)
GPIO.setup(16, GPIO.OUT)
GPIO.setup(26, GPIO.OUT)
GPIO.setup(36, GPIO.OUT)

dec=(GPIO.input(36)<<3)+(GPIO.input(26)<<2)+(GPIO.input(16)<<1)+(GPIO.input(12))

print (dec)

GPIO.cleanup()
	
	
	
