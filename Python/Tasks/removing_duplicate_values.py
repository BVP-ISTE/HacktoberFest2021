"""
With a given list [12,24,35,24,88,120,155,88,120,155],
write a program to print this list after removing all duplicate
values with original order reserved.
"""
def removeDuplicate(lists):
    l=[]
    for i in lists:
        if i in lists and i not in l:
            l.append(i)
    return l  

li=[12,24,35,24,88,120,155,88,120,155]
print(removeDuplicate(li))
