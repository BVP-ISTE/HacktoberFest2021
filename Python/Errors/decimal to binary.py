# decimal to binary
import math
  
num=int(input("Enter a Number : "))
bnum=""
rem=""
while num>=1:
    rem+=str(num%2)
    num=math.floor(num/2)
    
for i in range(len(rem)-1,-1,-1):
    bnum = bnum + rem[i]
     
print("Binary number for given number is {0}".format(bnum))
