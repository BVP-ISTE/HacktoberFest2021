# Error Problem : Count Zeros
# Given an integer n, count and return the number of zeros
# that are present in the given integer using recursion.


def count(n):

    if n//10 == 0 and n == 0:
        return 1
    elif n//10 == 0:
        return 0
    digit = n % 10
    smallans = count(n/10)
    if digit == 0:
        return smallans
    else:
        return smallans


n = int(input())
print(count(n))
