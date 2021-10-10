//
//  sum of nodes of n-ary tree.cpp

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

//function for calculating sum of nodes
int sum=0;
int sumNodes(TreeNode<int>*root){
    //find and correct the error in implementation of sum of nodes
    
    for(int i=0;i<root->children.size();i++){
        sumNodes(root->children[i]);
    }
    sum += root->data;
    return sum;
}

int main(){
    TreeNode<int>*root=takeInput();
    cout<<sumNodes(root)<<endl;
}

