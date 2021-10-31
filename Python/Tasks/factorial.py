def factorial(n):
    if (n == 1):
        return 1
    elif(n < 0):
        print("the number is less than 0")
    else:
        return n*factorial(n-1)
  
print (factorial(6))
