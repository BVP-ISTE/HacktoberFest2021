def palindrome(string):
    if len(string) < 1:
        return True
    else:
        if string[0] == string[-1]:
            return palindrome(string[1:-1])
        else:
            return False
s=str(input("Enter any string(without giving any space!): "))
if(palindrome(s)==True):
    print("True")
else:
    print("False!")
