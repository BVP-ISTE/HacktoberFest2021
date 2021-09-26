//
//  count nodes of n-ary tree.cpp


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

//function for counting number of nodes
int numNodes(TreeNode<int>*root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        //one statement missing in for loop
        //complete the the loop
        
    }
    return ans;
}

int main(){
    TreeNode<int>*root=takeInput();
    cout<<numNodes(root)<<endl;
}
