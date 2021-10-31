# Check Palindrome (recursive)

# Check if a given String S is palindrome or not (using recursion).
# Return true or false.
# Read input as specified in the question.
# Print output as specified in the question.

def palindrome(s):
    if len(s) < 1: 
        return True
    else:
        if s[0] == s[-1]: 
            return palindrome(s[1:-1]) 
        else: 
            return False

s = input()
print(palindrome(s))



