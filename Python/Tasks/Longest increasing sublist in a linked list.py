import math 
  
class Node:  
    def __init__(self, data):  
        self.data = data  
        self.next = None
  
# Function that count maximum number of continuous  
# increasing elements in linked list and display  
# the list.  
def countIncreasingElements(head):  
      
    # Traverse the list and keep track of  
    # max increasing and current increasing lengths  
    curr_len = 1
    max_len = 1
    total_count = 1
    res_index = 0
    curr = head  
    while(curr.next != None):  
          
        # Compare head.data with head.next.data  
        if (curr.data < curr.next.data):  
            curr_len = curr_len + 1
        else:  
              
            # compare maximum length with len.  
            if (max_len < curr_len):  
                max_len = curr_len  
                res_index = total_count - curr_len  
              
            curr_len = 1
          
        total_count = total_count + 1
        curr = curr.next
      
    if (max_len < curr_len):  
        max_len = curr_len  
        res_index = total_count - max_len  
      
    # Print the maximum number of  
    # continuous elements in linked list.  
    print("Number of continuously increasing",  
               "element in list : ", end = "")  
    print(max_len)  
  
    # Traverse the list again to print  
    # longest increasing sublist  
    i = 0
    print("Increasing linked list")  
    curr = head 
    while(curr != None):  
          
        # compare with starting index and index of  
        # maximum increasing elements if both are  
        # equals then execute it.  
        if (i == res_index):  
              
            # loop until max greater then 0.  
            while (max_len > 0): 
                  
                # Display the list and temp point  
                # to the next element.  
                print(curr.data, end = " ") 
                curr = curr.next
                max_len = max_len - 1
              
            break
          
        i = i + 1
        curr = curr.next
  
# Function to insert an element 
# at the beginning  
def push(head, data):  
    newNode = Node(data)  
    newNode.data = data  
    newNode.next = head 
    head = newNode  
    return head 
  
# Display linked list.  
def printList(node) :  
    #complete the function
      
    print()  
  
# Driver Code 
if __name__=='__main__':  
  
    # Create a node and initialize with None  
    head = None
  
    # push() insert node in linked list.  
    # 15 . 18 . 5 . 8 . 11 . 12  
    head = push(head, 12)  
    head = push(head, 11)  
    head = push(head, 8)  
    head = push(head, 5)  
    head = push(head, 18)  
    head = push(head, 15)  
    print("Linked list:")  
    printList(head)  
  
    # Function call countIncreasingElements(head)  
    countIncreasingElements(head)  
  
