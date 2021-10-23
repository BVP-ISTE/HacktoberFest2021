#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//structure of Node
struct Node{
  int data;
  Node* left;
  Node* right;
};
//function to create the node
Node* create(int x){
  Node* temp=new Node;
  temp->data=x;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
//function to find the level of node
int find(Node* root,int t,int l)
{
    if(!root)return 0;
    if(root->data==t)return l;
    int x=find(root->left,t,l+1);
    if(x!=0)return x;
    x=find(root->right,t,l+1);
    return x;
}
int getLevel(struct Node *node, int target)
{
    if(!node)return 0;
  int l=1;
    return find(node,target,l);
}
//main fuction
int main(){
  Node* root=create(1);
  root->left=create(2);
  root->left->right=create(5);
  root->left->left=create(4);
  root->right=create(3);
  root->right->left=create(6);
  root->right->right=create(7);
    cout<<"level of 5 is :"<<" ";
    cout<<getLevel(root,5);
    return 0;
}
