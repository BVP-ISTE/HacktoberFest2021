#all prime numbers
#find and correct the error in the code
n=int(input())

if n==1:
    print("1 is neither prime nor composite")
for i in range (2,(n+1)):
    sum=0
    for j in range(1,i+1):
        if i%j==0:
            sum+=1
    if sum==2:
        print(i)
