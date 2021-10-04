#decimal to binary
#find the error in the code
num=int(input())
bnum = 0
mul = 1
while num>0:
    rem = num%2
    bnum = bnum+(rem*mul)
    mul = mul*10
    num = int(num/2)
print(bnum)
