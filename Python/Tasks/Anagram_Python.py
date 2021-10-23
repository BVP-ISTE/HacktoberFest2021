# An Anagram is a condition where one string or number is rearranged inmanner such that ,
# each character of the rearranged string or number must be a part of another string or number.

 # Python program to check if two strings are anagrams using sort()

 def anagramCheck2(str1,str2):  
    # Responisble for Converting the given string into lists  
    list1 = list(str1)  
    list2 = list(str2)  
    # Sort() used to sort the list value  
    list1.sort()  
    list2.sort()  
  
    position = 0               #initlaising
    matches = True  

    '''In each iteration of the while loop below, 
    the string length is compared to the position value.

    Each element of both lists compared to each other and increased the position value by one.
     Once the position value became greater than the string length, the loop will be terminated,
    and it returns true, otherwise, it will return false.'''
  
    while position < len(str1) and matches:  
        if list1[position]==list2[position]: # 
            position = position + 1  
        else:  
            matches = False  
  
    return matches  
  
print(anagramCheck2('python','ythonp'))  