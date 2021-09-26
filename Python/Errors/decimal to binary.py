#decimal to binary
#find the error in the code
num=int(input())
i=0
ans=0
while num!=0:
    rem=num%2
    ans=ans+(rem*(10**i))
    num=num/2
    i=i+1
print(ans)
