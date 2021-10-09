# bubble sort
# list- 34,56,71,3,19,5

def bubbleSort(list):
    for passnum in range(len(list)-1,0,-1):
        for i in range(0,passnum):
            if list[i]>list[i+1]:
                temp=list[i]
                list[i]=list[i+1] # added this line
                list[i+1]=temp


alist= list()
number=raw_input("enter the elements ") # also raw_input

for i in range(int(number)):
    n=raw_input("number: ")
    alist.append(int(n))

print("the unsorted array") # I used print "the... " but that didn't work. So, I used parenthesis instead

print(alist)

bubbleSort(alist)

print("sorted array")

print(alist)
    
