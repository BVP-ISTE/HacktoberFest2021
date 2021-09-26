//
//  count leaf node in n-ary tree.cpp


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

//function for calculating count leaf nodes
int numLeafNode(TreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int leaf=0;
    for(int i=0;i<root->children.size();i++){
        //one statement missing in for loop
        //complete the the loop
        
    }
    return leaf;
}

int main(){
    TreeNode<int>*root=takeInput();
    cout<<numLeafNode(root)<<endl;
}


