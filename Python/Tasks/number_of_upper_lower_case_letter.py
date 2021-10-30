# Write a Python function that accepts a string and calculate the number of upper case letters and lower case letters.

def calculate():
    s = input("Please enter the string...")
    upper = 0
    lower = 0
    for i in s:
        if(i.isupper()):
            upper+=1
        if(i.islower()):
            lower+=1
    print("String has " + str(upper) + " uppercase and " + str(lower) + " lowercase characters.")
calculate()
