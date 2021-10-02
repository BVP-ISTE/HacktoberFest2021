//
//  printing ith Node in linked list.cpp

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

//function for taking input

Node*takeInput(){
    int data;
    cin>>data;
    Node*head=NULL;
    while(data!=-1){
        Node*newNode=new Node(data);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cin>>data;
    }
    return head;
}
//function for printing linked list
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//function for printing ith node
void printIthNode(Node*head,int i){
    //find and correct the error in the function
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        if(count==i){
            cout<<temp->data<<endl;
        }
        count++;
        temp=temp->next;
    }
}

int main(){
    Node*head=takeInput();
    print(head);
    cout<<"\n Enter position"<<endl;
    int i;
    cin>>i;
    printIthNode(head,i);

}
