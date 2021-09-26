//
//  postorder in n-ary tree.cpp


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

//function for postorder
void postorder(TreeNode<int>*root){
    //find the error in postorder and fix it
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        postorder(root->children[i]);
    
    }
}

int main(){
    TreeNode<int>*root=takeInput();
    postorder(root);
}



