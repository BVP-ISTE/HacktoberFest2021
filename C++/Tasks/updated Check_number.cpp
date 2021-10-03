#include<iostream>
using namespace std;

//Given an array of length N and an integer x, you need to find if x is present in the array or not. 
//Return true or false.  Do this recursively.

bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  int l=0,r=size-1;
  while(l<=r){
      int mid=l+(r-l)/2;
      if(input[mid]==x)
        return true;
      else if(input[mid]<x)
        l=mid+1;
      else
        r=mid-1;
  }
  return false;


}

int main(){
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int x;
    cin >> x;
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}


