#include<iostream>
using namespace std;

// LINEAR SEARCH TIME COMPLEXITY O(n)

int linearsearch(int arr[],int n, int key){
    
    for (int index = 0; index < n; index++)
    {
        if (arr[index]==key)
        {
            return index;
        }
        
    } return -1;
    
}
int main(){

    int n;
    cin>>n;

    int arr[100]; //change this to n
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];  
    }

    int key;
    cin>>key;

    cout<<linearsearch(arr,n,key)<<endl;

    return 0;
}