import math
 
# Function to return the highest power
# of k less than or equal to n
def prevPowerofK(n, k):
 
    p = int(math.log(n) / math.log(k))
    return int(math.pow(k, p))
 
# Function to return the smallest power
# of k greater than or equal to n
def nextPowerOfK(n, k):
 
    return prevPowerofK(n, k) * k
 
# Function to print the result
def printResult(n):
#find the error
 
    print(prevPowerofK(n, k), nextPowerOfK(n, k))
 
# Driver code
n = 6
k = 3
 
printResult(n, k)
 
