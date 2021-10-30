
# Sum of digits (recursive)

# Write a recursive function
# that returns the sum of the digits of a given integer.
# Read input as specified in the question.
# Print output as specified in the question.
def sum(n):
    if n==0:
        return 0
    else:
        return(n%10+sum(n//10))

n = int(input())
print(sum(n))
