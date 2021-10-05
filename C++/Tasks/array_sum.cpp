#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of Array : ";
    cin>>n;

    int input[n];
    cout<<"Enter elements one by one :\n"<<endl;
    for(int i=0; i<n; i++){
        cin>>input[i];
    }

    /*
    You have to write the code for sum of array
    */
    int sum = 0;
    for(int i = 0; i<n ; i++){

        sum+=input[i];

    }

    cout<<"Sum of Elements of array is : "<<sum<<endl;

}
