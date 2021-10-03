#include<iostream>
using namespace std;

//Write a program to find x to the power n (i.e. x^n).
//Take x and n from the user. You need to return the answer.
//Do this recursively.

int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(x==0) return 0;
    int power=1;
    for(int i=0;i<n;i++)
    {
        power=power*x;
    }
    return power;

}

int main(){
    int x, n;
    cin >> x >> n;

    cout << power(x, n) << endl;
}


