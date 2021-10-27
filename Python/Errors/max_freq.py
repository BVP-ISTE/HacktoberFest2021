# Maximum Frequency

#You are given an array of integers that contain numbers in random 
#order. Write a program to find and return the number which occurs the 
#maximum times in the given input.
#If two or more elements contend for the maximum frequency, return the 
#element which occurs in the array first.

def mostFrequent(arr, n):
 
    # Sort the array
    arr.sort()
    max_count = 1; res = arr[0]; curr_count = 1
     
    for i in range(1, n):
        if (arr[i] == arr[i - 1]):
            curr_count += 1
             
        else :
            if (curr_count > max_count):
                max_count = curr_count
                res = arr[i - 1]
             
            curr_count = 1
     
    # If last element is most frequent
    if (curr_count > max_count):
     
        max_count = curr_count
        res = arr[n - 1]
     
    return res
 
# Driver Code
arr = [1, 5, 2, 1, 3, 2, 1]
n = len(arr)
print(mostFrequent(arr, n))
 
