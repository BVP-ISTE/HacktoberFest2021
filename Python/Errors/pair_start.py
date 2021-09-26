# Pair star

# Given a string, compute recursively a new string where identical
# chars that are adjacent in the original string are separated from
# each other by a "*".
# Read input as specified in the question.
# Print output as specified in the question.
def pair(s):
    ch = ''
    small = pair(s[2:])
    if s[1] == s[2]:
        ch = ch+'*'
        return ch+small
    else:
        ch = ch+'*'
        return ch+small


s = input()
print(pair(s))
