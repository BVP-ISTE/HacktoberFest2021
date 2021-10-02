#include<iostream>
using namespace std;

//Given an array of length N and an integer x, you need to find if x is present in the array or not. 
//Return true or false.  Do this recursively.

bool checkNumber(int arr[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

      if(size==0){
          return false;
      }
      else{
          if(arr[size]==x)
          return true;

          else{
           return checkNumber(arr, size-1,x);
      }    
      }
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


