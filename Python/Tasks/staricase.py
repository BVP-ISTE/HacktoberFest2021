# Read input as specified in the question.
# Print output as specified in the question.
# Staircase

# A child is running up a staircase with N steps, and can hop either 1
# step, 2 steps or 3 steps at a time. Implement a method to count how
# many possible ways the child can run up to the stairs. You need to
# return number of possible ways W.

def stair(n):
   # Implement the function
   for stairs in range(1, n + 1):
      print(' ' * (n - stairs) + '##' * stairs)



n = int(input())
print(stair(n))
