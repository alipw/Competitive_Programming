from bs4 import BeautifulSoup
import sys
import os
import requests

url = sys.stdin.read()
workdir = os.getcwd()
req = requests.get(url)
soup = BeautifulSoup(req.text, "html.parser")
i = 0
for pre in soup.find_all('pre'):
	if i == 0 : 
		i += 1
		f = open(workdir + "/in2.txt", "w")
		f.write(pre.text)
		f.close()
	else :
		f = open(workdir + "/judgeout.txt", "w")
		f.write(pre.text)
		f.close()
		break

jdgout = open(workdir + "/judge.txt", "w")
judgeout = open(workdir + "/judgeout.txt", "r")
lines = judgeout.readline()
i = 0
while lines : 
	if i != 0 : 
		jdgout.write(lines)
	i += 1
	lines = judgeout.readline()
jdgout.close()
judgeout.close()
i = 0
datain = open(workdir + "/in.txt", "w")
fakein = open(workdir + "/in2.txt", "r")
line = fakein.readline()
while line : 
	if i != 0 : 
		datain.write(line)
	i += 1
	line = fakein.readline()

datain.close()
fakein.close()