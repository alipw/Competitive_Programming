from bs4 import BeautifulSoup
import sys
import requests

url = sys.stdin.read()
req = requests.get(url)
soup = BeautifulSoup(req.text, "html.parser")
i = 0
for pre in soup.find_all('pre'):
	if i == 0 : 
		i += 1
		f = open("/home/alipw/Documents/CP/C++/in2.txt", "w")
		f.write(pre.text)
		f.close()
	else :
		f = open("/home/alipw/Documents/CP/C++/judgeout.txt", "w")
		f.write(pre.text)
		f.close()
		break

jdgout = open("/home/alipw/Documents/CP/C++/judge.txt", "w")
judgeout = open("/home/alipw/Documents/CP/C++/judgeout.txt", "r")
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
datain = open("/home/alipw/Documents/CP/C++/in.txt", "w")
fakein = open("/home/alipw/Documents/CP/C++/in2.txt", "r")
line = fakein.readline()
while line : 
	if i != 0 : 
		datain.write(line)
	i += 1
	line = fakein.readline()

datain.close()
fakein.close()