# reverse the string

def reverse(s):
     rev = ""
     i = len(s) - 1
     while i>=0 :
          rev += s[i]
          i -= 1
     return rev
print(reverse(input("Please enter a string...")))
