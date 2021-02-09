import filecmp 
  
  
# Path of first file 
file1 = "/home/alipw/Documents/CP/C++/in.txt"
  
# Path of second file 
file2 = "/home/alipw/Documents/CP/C++/judge.txt"
   
# Compare the os.stat() 
# signature i.e the metadata 
# of both files  
comp = filecmp.cmp(file1, file2) 
  
# Print the result of comparison 
print(comp) 
  
# Compare the 
# contents of both files 
comp = filecmp.cmp(file1, file2, shallow = False) 
  
# Print the result of comparison 
print(comp) 