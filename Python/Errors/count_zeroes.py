# Error Problem : Count Zeros
# Given an integer n, count and return the number of zeros
# that are present in the given integer using recursion.


def count(n):
    
    if n == 0:
        return 0
    elif n%10 == 0:
        return 1 + count(n//10)
    else:
        return count(n//10)

n = int(input())
print(count(n))