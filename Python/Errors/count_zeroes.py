# Error Problem : Count Zeros
# Given an integer n, count and return the number of zeros
# that are present in the given integer using recursion.


sum=0
def count(n):
    global sum
    if n==0:
        pass
    else:
        i=n%10
        
        if(i==0):
            sum+=1
 
        n=n//10
        count(n)
    return sum

        
        
    
n = int(input())
print(count(n))


