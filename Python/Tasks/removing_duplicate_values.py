"""
With a given list [12,24,35,24,88,120,155,88,120,155],
write a program to print this list after removing all duplicate
values with original order reserved.
"""


def removeDuplicate(lists):
    newlist = []
    for x in lists:
        num = lists.count(x)
        
        if num == 1:
            print(num)
            newlist.append(x)
        else:
            if x in newlist:
                pass
            else:
                newlist.append(x)
                

    return newlist

li=[12,24,35,24,88,120,155,88,120,155]
print(removeDuplicate(li))
