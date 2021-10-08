# program for fibonacci series
# This is a extremely fast algorithm for fibonacci numbers. Even 100000th fibonacci number will be printed instantly.

def fibonacci(n):
    last_two = [1, 1]
    
    if n == 1 or n == 2:
        return 1

    for i in range(0, n-2):
        num = last_two[0] + last_two[1]
        last_two = [last_two[1], num]
    
    return num
  
  
print (fibonacci(5))
