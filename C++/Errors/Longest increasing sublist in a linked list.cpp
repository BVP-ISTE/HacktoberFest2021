#include <bits/stdc++.h> 
using namespace std; 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
// Function that count maximum number of continuous 
// increasing elements in linked list and display 
// the list. 
void countIncreasingElements(struct Node *head) 
{ 
    // Traverse the list and keep track of max increasing 
    // and current increasing lengths 
    int curr_len = 1, max_len = 1; 
    int total_count = 1, res_index = 0; 
    for (Node *curr=head; curr->next!=NULL; curr=curr->next) 
    { 
        // Compare head->data with head->next->data 
        if (curr->data < curr->next->data) 
            curr_len++; 
        else
        { 
            // compare maximum length with len. 
            if (max_len < curr_len) 
            { 
                max_len = curr_len; 
                res_index = total_count - curr_len; 
            } 
  
            curr_len = 1; 
        } 
        total_count++; 
    } 
  
    if (max_len < curr_len) 
    { 
        max_len = curr_len; 
        res_index = total_count - max_len; 
    } 
  
    // Print the maximum number of continuous elements 
    // in linked list. 
    cout << "Number of continuously increasing element"
            " in list : "; 
    cout << max_len << endl; 
  
    // Traverse the list again to print longest increasing 
    // sublist 
    int i = 0; 
    cout << "Increasing linked list" << endl; 
    for (Node* curr=head; curr!=NULL; curr=curr->next) 
    { 
    //find the error in the loop
        // compare with starting index and index of 
        // maximum increasing elements if both are 
        // equals then execute it. 
        if (i == res_index) 
        { 
            // loop until max greater then 0. 
            while (max_len > 0) 
            { 
                // Display the list and temp point 
                // to the next element. 
                cout << curr->data << " "; 
                curr = curr->next; 
                max_len--; 
            } 
            break; 
        } 
  
        i--; 
    } 
} 
  
// Function to insert an element at the beginning 
void push(struct Node** head, int data) 
{ 
    struct Node* newNode = new Node; 
    newNode->data = data; 
    newNode->next = (*head); 
    (*head) = newNode; 
} 
  
// Display linked list. 
void printList(struct Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data << " "; 
        node = node->next; 
    } 
    cout << endl; 
} 
  
// Driver functions 
int main() 
{ 
    // Create a node and initialize with NULL 
    struct Node* head = NULL; 
  
    // push() insert node in linked list. 
    // 15 -> 18 -> 5 -> 8 -> 11 -> 12 
    push(&head, 12); 
    push(&head, 11); 
    push(&head, 8); 
    push(&head, 5); 
    push(&head, 18); 
    push(&head, 15); 
    cout << "Linked list:" << endl; 
    printList(head); 
  
    // Function call countIncreasingElements(head) 
   // cout << countIncreasingElements(head) << endl; 
    countIncreasingElements(head); 
    return 0; 
} 
