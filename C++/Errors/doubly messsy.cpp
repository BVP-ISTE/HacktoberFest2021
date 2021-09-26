#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
    struct node *prev; //creation of doubly linked list 
} *head; 
 
void createnode(int n)     // declaring function prototype with one input parameter and integer return type,covers the creation of a doubly linked list
{
    struct node *stnode,*ptr;
    int i,d;
    ptr=NULL;
    head= (struct node *)malloc(sizeof(struct node));  //assigning memory to head pointer
    printf("Enter the data for node 1\n ");
    scanf("%d", &d);
    head->data=d; //storing value of node provided by user
    head->next=NULL; //head pointer pointing to null
    head->prev=NULL; //because it is a doubly linked list 
    ptr= head;  //currently this pointer points to head node and it'll move forward
    for(i=2; i<=n; i++) //i starts with 2 as head node is created beforehand
    {
        stnode=(struct node *)malloc(sizeof(struct node)); 
        if(stnode==NULL)
        {
            printf("Memory cannot be allocated ");
            break;
        }
        else
        {
            printf("Enter the data for node %d: \n", i);
            scanf("%d", &d);
            stnode->data=d; //second node value assigning 
            stnode->next=NULL;
            stnode->prev=NULL;
            ptr->next=stnode; //ptr stores address of freshly created node
            stnode->prev=ptr; //connecting current node to head node 
            ptr=ptr->next;
        }
    }
}
void displaynode() //talks about displaying the created linked list above
{   struct node *ptr;
    ptr=head;
    if(ptr==NULL)  //checks if pointer has an address stored and if it does not then it will display warning
    {
        printf("List is empty\n "); 
    }
    else
    {
       while(ptr!= NULL)
        {
            printf("Data = %d\n ", ptr->data);
            ptr=ptr->next; //If the ptr has address stored,using the while loop list will be printed
        }
    }
}
void insertionbeginning(int a) // INSERTION IN CREATED LINKED LISTS using prototype with one input parameter and return type int (a)Beginning
{
     struct node *beg_node;
 
     beg_node=(struct node *)malloc(sizeof(struct node)); //the node to be inserted is created
     printf("Enter the Data to be inserted at beginning \n");
     scanf("%d", &a);
     beg_node->data=a;
     beg_node->prev=NULL;
     head->prev=beg_node;
     beg_node->next=head;
     head=beg_node; //head pointer points to the newly created node.
 
}
 
void insertionending(int b) //(b) end insertion 
{
    struct node *end_node,*ptr;
 
    end_node=(struct node *)malloc(sizeof(struct node)); //node to be inserted is created
     printf("Enter the Data to be inserted at end \n");
     scanf("%d", &b);
     end_node->data=b;
     end_node->next=NULL;
     ptr=head;
     while(ptr->next!=NULL)
     {
         ptr=ptr->next; //the pointer traverses through the linked list and reaches the end where node is to be inserted
     }
     ptr->next=end_node;
     end_node->prev=ptr;
}
 
void insertionmiddle(int p) //(c)At specific index insertion
{
    struct node *pos_node,*ptr;
    int f;
    int i=1,index=0;
    ptr=head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        index++; //index refers to the position of nodes and keeps an check that the pointer is pointing to which node.
    }
    if(p>index)
    {
      printf("Invalid Position Entered \n ");
    }
    else
    {
     ptr=head;
     while (i<p-1) // nodes are traversed till p-1 so that memory allocation of node to be inserted takes place.
     {
         ptr=ptr->next;
         i++;
     }}
    pos_node=(struct node *)malloc(sizeof(struct node)); //memory is allocated to the node that has to be inserted
    printf("Enter the data to be inserted at given position \n ");
    scanf("%d", &f);
    pos_node->data=f;
    pos_node->prev=ptr; //pointer of new node points to the pointer of current node 
    pos_node->next=ptr->next; 
    ptr->next=pos_node; // next pointer of current node points to new node 
    pos_node->next->prev=pos_node;
 
}
 
void deletionbeginning() //DELETION OF NODE IN LINKED LIST (a)BEGINNING 
{
    struct node *ptr;
    if(head == NULL)
    {  
        printf(" There are no node in the list."); //warning displayed
    } 
    else
    {
        ptr = head;
        head = head->next;
        head->prev=NULL; 
        free(ptr); //to free the memory allocated to the node that is to be deleted
    }
}
 
void deletionending() //(b)END
{
   struct node *prevnode,*ptr;
   ptr=head;
    //prevnodee=(struct node *)malloc(sizeof(struct node));
    while(ptr->next!=NULL)
	{
    	prevnode=ptr;
    	ptr=ptr->next;
	}
            //if(ptr->next!=NULL)
   // {
                   //to locate the node to be deleted 
       // ptr=ptr->next;
    //}
	  prevnode->next=NULL;  //setting the node prior to freshly deleted node as null. the node is disconnected from list
        free(ptr); 
}
 
void deletion_index(int c) //(c)AT INDEX
{
    struct node *del_node,*ptr;
    int i=1,index;
    ptr=head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        index++;
    }
    //if(c>index)
    //{
     // printf("Invalid Position Entered \n ");
     // exit(0);
    //}
   if (c<index)
  {     ptr=head;
        while(i<c-1)
        {
            ptr=ptr->next; //to locate the node previous to the node to be deleted
            i++;
        }
        del_node=ptr->next; //change the next of previous node skipping the node to be deleted
        ptr->next=del_node->next; //connecting the previous node to next nod
        printf("data of node which is to be deleted is : %d\n",del_node->data);
        del_node->next->prev=ptr; //connecting next node to previous node via second link 
        free(del_node);
    }
}
 
void reverse_node()  //REVERSAL OF NODE
{
    struct node *current, *nextnode, *r; //r is for traverse
    current=head;
    while(current!=NULL)
    {
        nextnode=current->next; //to advance the pointer
        current->next=current->prev; //next becomes previous  for every node
        current->prev=nextnode; //present becomes previous node
        r=current; //current node is moved to next node
        current=nextnode; 
    }
    head=r; //last element is made head of list
}
 
 
 int main()
    {
      int n, val, a, b, c, ch, ch1, ch2;
      int h;
      printf("Enter the no of nodes \n");
      scanf("%d", &n); //n=no. of nodes
      createnode(n);
      printf("Display Function \n");
      displaynode();
      printf("INSERT OR DELETE \n");
      printf("1 Adding Node \n 2  Deleting Node \n ");
      scanf("%d", &ch);
      if(ch==1)
      {
        printf("Enter the Data to be inserted at beginning \n");
        scanf("%d", &a); //a=beginning
        insertionbeginning(a);
        printf("Display Function After insertion at beginning \n");
        displaynode(); 
        printf("Enter the position to be insert an element at specific position \n");
        scanf("%d", &c); //c=index insert
        insertionmiddle(c);
        printf("Display Function After insertion at specific position \n");
        displaynode();
        printf("Enter the Data to be inserted at end \n");
        scanf("%d", &b); //b=end
        insertionending(b);
        printf("Display Function After insertion at end \n");
        displaynode();
        printf("Linked List Before Reversal \n");
        reverse_node();
        printf("After Reversing \n");
         displaynode();
      }
      else
      {
         printf("Deletion from the Beginning \n");
         deletionbeginning();
         printf("Node After Deletion \n");
         displaynode();
         printf("Deletion from the index \n");
         printf("Enter the index \n");
         scanf("%d", &ch);
         deletion_index(ch);
         printf("Node After Deletion \n");
         displaynode();
         printf("Deletion from the End \n");
         void deletionending();
         printf("Node After Deletion \n");
        displaynode();
        printf("TO REVERSE THE LINKED LIST  \n");
 
      printf("Reversing Node \n");
      reverse_node();
      printf("After Reversing \n");
      displaynode();
 
      }
      return 0;
  }
