"""
Write a program that accepts a sentence and calculate the number of letters and digits.
Suppose the following input is supplied to the program:
hello world! 123
Then, the output should be:
LETTERS 10
DIGITS 3
"""
letters=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
digits=['1','2','3','4','5','6','7','8','9','0']
l=0
d=0
s=input("Enter the string:")

for i in s:
        for j in letters:
                if(i.upper()==j):
                        l+=1
        for k in digits:
                if(i==k):
                        d+=1
print("No.of letters=",l)
print("No.of digits=",d)
                
