#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int input[n];
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

    cout<<sum<<endl;

}


