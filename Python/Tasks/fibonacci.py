n = int(input("Enter number of terms: "))
n1, n2 = 0, 1 # first two terms of fibonacci series
i = 0  #variable for loop

if n <= 0:
  print("Please enter a positive integer")
elif n == 1:
  print("Fibonacci sequence upto",n,":")
  print(n1)
else:
  print("Fibonacci sequence:")
  for i in range(n):  #for loop upto nth term
      print(n1)
      sum = n1 + n2  #Logic for the fibonacci series
      n1 = n2
      n2 = sum
      i += 1
