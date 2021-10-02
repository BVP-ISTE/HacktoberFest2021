//Program for Sum of Digits of a Number
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter size of array = ";
    cin>>m;
    n=m-1;
    int arr[n];
    
    for(int i=0; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
