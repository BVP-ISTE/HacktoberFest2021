"""
Write a program which accepts a sequence of comma separated 4 digit binary numbers
as its input and then check whether they are divisible by 5 or not.
The numbers that are divisible by 5 are to be printed in a comma separated sequence.
Example:
0100,0011,1010,1001
Then the output should be:
1010
"""


def binary_to_decimal(bi):
    n1 = int(bi[0])
    n2 = int(bi[1])
    n3 = int(bi[2])
    n4 = int(bi[3])
    num = (n1 * 8) + (n2 * 4) + (n3 * 2) + (n4 * 1)
    return num


def binary_numbers():
    print("Please enter comma seperated binary numbers")
    s = input()
    i = 0  # loop variable
    noc = s.count(",")  # number of commas in original input
    noc += 1
    while i <= noc:
        comma = s.find(",")  # position of next comma
        if comma == -1:
            break
        b = s[0: (comma+1)]  # binary number extracted
        d = binary_to_decimal(b)
        if d % 5 == 0:
            print(b.replace(",", ""))
        s = s.replace(b, "")
        i += 1


binary_numbers()
