
judgeout = open("judgeout.txt", "r")
file_is_not_empty = judgeout.readline()
while(file_is_not_empty) : 
	print(file_is_not_empty, end = '')
	file_is_not_empty = judgeout.readline()
judgeout.close()
