//
//  height of n-ary tree.cpp


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

//function for calculating height of tree
int height(TreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int maxHeight=0;
    for(int i=0;i<root->children.size();i++){
        int tempHeight=height(root->children[i]);
      // a if statemnet is missing in the function
      //complete the function
        if(tempHeight > maxHeight){
            maxHeight = tempHeight;
        }
        
    }
    return maxHeight+1;
}

int main(){
    TreeNode<int>*root=takeInput();
    cout<<height(root)<<endl;
}



