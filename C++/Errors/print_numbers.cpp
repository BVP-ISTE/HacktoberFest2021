#include<iostream>
using namespace std;

//Given is the code to print numbers from 1 to n in increasing order recursively. 
//But it contains few bugs that you need to rectify such that all the test cases pass.

void print(int n,int i){
    
    if(n == 1){
        cout << n+i-1 << " ";
    }
    else cout << i << " ";
    if(n>1)
    print(n-1,i+1);
}

//No need to change the main function.
int main(){
    int n,i=1;          //Taken i=1 to maintain a counter starting from 1 up
    cin >> n;
  
    print(n,i);
}
