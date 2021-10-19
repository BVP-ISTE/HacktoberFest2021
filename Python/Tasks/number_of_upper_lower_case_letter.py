# Write a Python function that accepts a string and calculate the number of upper case letters and lower case letters.

def count_caps():
    s = input("Please enter the string...")
    upper = 0
    lower = 0
    length = len(s)
    i = 0
    while i < length:
        if s[i].isupper():
            upper += 1
        if s[i].islower():
            lower += 1
        i += 1
    print("String has " + str(upper) + " uppercase and " + str(lower) + " lowercase characters.")
count_caps()
