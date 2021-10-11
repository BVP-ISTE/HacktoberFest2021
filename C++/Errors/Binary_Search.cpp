#include <iostream>
using namespace std;

// BINARY SEARCH TIME COMPLEXITY O(log n base 2)

int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n;

    while(start<=end){
        int mid= (start+end)/2;
        
        if(arr[mid]==key){
            return mid;
        }

        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    return -1;

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

    cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}