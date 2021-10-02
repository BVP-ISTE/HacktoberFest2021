number = int(input("Enter the number"))
string = str(number)
rev_string = string[::1]
print("reversed string:",rev_string)
if string == rev_string:
  print("Entered number is palindrome")
else: print("Entered number is not palindrome")
