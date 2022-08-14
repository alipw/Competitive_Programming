import filecmp 
import os
  
# Path of first file 
workdir = os.getcwd()
file1 = workdir + "/out.txt"
  
# Path of second file 
file2 = workdir + "/judge.txt"
   
# Compare the os.stat() 
# signature i.e the metadata 
# of both files  
  
# Print the result of comparison 
  
# Compare the 
# contents of both files 
comp = filecmp.cmp(file1, file2, shallow = False) 
  
f = open("result.txt", "w")
result = ""
if comp : 
	result = "[VERDICT: true]"
else : 
	result = "[VERDICT: false]"
f.write(result)
f.close()
print(result) 