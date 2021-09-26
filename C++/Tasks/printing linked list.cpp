//
//  printing linked list.cpp


#include <iostream>
using namespace std;

//implementation of Node class
class Node{
public:
    int data;
    Node*next;
    
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
//function for printing linked list
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        //complete the code in the while loop
        
        
    }
}

int main(){
    //statically
    Node n1(1);
    Node*head=&n1;
    Node n2(2);
    n1.next=&n2;
    
    //dynamically
    Node*n3=new Node(3);
    n2.next=n3;
    Node*n4=new Node(4);
    n3->next=n4;
    print(head);
}

