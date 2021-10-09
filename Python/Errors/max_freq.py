# Maximum Frequency

#You are given an array of integers that contain numbers in random 
#order. Write a program to find and return the number which occurs the 
#maximum times in the given input.
#If two or more elements contend for the maximum frequency, return the 
#element which occurs in the array first.

def maxFreq(l):
    d = {}
    for w in l:
        if w in d:
            d[w] += 1
        else: # if the element is not there in the dictionary then adding it to 'd'
            d[w] = 1

    final = max(d, key= lambda x: d[x]) # enhanced max function
    return final


# Main
# n = int(input()) # also I don't know why you are taking n as input. 
l = list(int(i) for i in input().strip().split(' '))
print(maxFreq(l))
