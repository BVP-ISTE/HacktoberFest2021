def isPalindrome(str):
 
    
    for i in range(0, int(len(str)/2)):
        if str[i] != str[len(str)-i-1]:
            return False
    return True
 

str =input("Enter the string:")
c = isPalindrome(str)
if(c):
    print("The string is a palindrome")
 
else:
      print("The string is not a palindrome")


    
