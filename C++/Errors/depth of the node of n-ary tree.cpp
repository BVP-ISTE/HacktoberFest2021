//
//  depth of the node of n-ary tree.cpp


#include <iostream>
#include<vector>
using namespace std;

template<typename T>
class TreeNode{
public:
    T data;
    vector<TreeNode<T>*>children;
    
    TreeNode(T data){
        this->data=data;
        
    }
};
    //taking input recursively
    TreeNode<int>*takeInput(){
        int rootData;
        cout<<"Enter data"<<endl;
        cin>>rootData;
        TreeNode<int>*root=new TreeNode<int>(rootData);
        int n;
        cout<<"Enter number of children of "<<rootData<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            TreeNode<int>*child=takeInput();
            root->children.push_back(child);
        }
        return root;
    }

//function for printing node at kth level
void printAtKthLevel(TreeNode<int>*root,int k){
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    //find and correct the error in the for loop
    for(int i=0;i<root->children.size();i++){
        printAtKthLevel(root->children[i],k);
    }
}


int main(){
    TreeNode<int>*root=takeInput();
    int k;
    cin>>k;
    printAtKthLevel(root,k);
}



