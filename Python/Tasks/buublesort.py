# bubble sort
# list- 34,56,71,3,19,5

def shortBubbleSort(alist):
    exchanges = True
    passnum = len(alist)-1
    while passnum > 0 and exchanges:
       exchanges = False
       for i in range(passnum):
           if alist[i]>alist[i+1]:
               exchanges = True
               temp = alist[i]
               alist[i] = alist[i+1]
               alist[i+1] = temp
       passnum = passnum-1

alist=[34,56,71,3,19,5]
shortBubbleSort(alist)
print("Sorted array")
print(alist)

