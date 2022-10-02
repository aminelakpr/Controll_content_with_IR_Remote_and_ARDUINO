import serial
import pyautogui

ard = serial.Serial("COM27",9600)

while True:
	name = ard.readline()
	name = name.decode("utf").rstrip()
	print(name)
	if name == "volume up":
		pyautogui.press("volumeup")
	elif name =="volume down":
		pyautogui.press("volumedown")
	elif name == "next":
		pyautogui.press("nexttrack")
	elif name == "prev":
		pyautogui.press("prevtrack")
	elif name == "pause":
		pyautogui.press("playpause")