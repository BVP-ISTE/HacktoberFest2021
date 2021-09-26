#Find and return number of trailing 0s in n factorial without calculating n factorial.
#find and correct the error in the following code

num=int(input())
ans=0
while num!=0:
    rem=num/5
    num=num/5
    ans=ans+rem
print(ans)
