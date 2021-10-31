"""
By using list comprehension, please write a program to print the list after
removing the 0th,4th,5th numbers in [12,24,35,70,88,120,155].
"""

l= [12,24,35,70,88,120,155]
l1=[]
for i in range(len(l)):
    if i==0 or i==4 or i==5:
        pass
    else:
        l1.append(l[i])
print(l1)
