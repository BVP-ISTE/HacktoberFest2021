array = input("Enter the string:")


isPalindrome = True
i = 0
n = len(array)

while i < (n-i-1):
    if array[i] != array[n-i-1]:
        isPalindrome = False
        break
    i += 1


print("Palindrome:", "Yes" if isPalindrome else "No")
