"""
With a given list [12,24,35,24,88,120,155,88,120,155],
write a program to print this list after removing all duplicate
values with original order reserved.
"""
def removeDuplicate( lists):
    i=0
    n=len(lists)
    seen = set()
    while i < n:
        if lists[i] in seen:
            lists.pop(i)
            n-=1
        else:
            seen.add(lists[i])
            i+=1
            
    for j in range(0,n//2):
        lists[j], lists[n-j-1] = lists[n-j-1], lists[j]

    return lists

li=[12,24,35,24,88,120,155,88,120,155]
print(removeDuplicate(li))
