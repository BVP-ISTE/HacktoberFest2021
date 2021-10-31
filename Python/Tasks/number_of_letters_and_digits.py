"""
Write a program that accepts a sentence and calculate the number of letters and digits.
Suppose the following input is supplied to the program:
hello world! 123
Then, the output should be:
LETTERS 10
DIGITS 3
"""


def letter_counter(s):
        length = len(s)
        i = 0
        letters = 0  # number of letters
        while i < length:
                if s[i] in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ":
                        letters += 1
                i += 1
        return letters


def number_counter(s):
        length = len(s)
        i = 0
        d = 0  # number of digits
        while i < length:
                if s[i] in "0123456789":
                        d += 1
                i += 1
        return d


S = input("Please enter a string...")
print("LETTERS", letter_counter(S))
print("DIGITS", number_counter(S))
