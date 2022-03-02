import filecmp 
  
  
# Path of first file 
file1 = "/home/alipw/Documents/CP/C++/out.txt"
  
# Path of second file 
file2 = "/home/alipw/Documents/CP/C++/judge.txt"
   
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