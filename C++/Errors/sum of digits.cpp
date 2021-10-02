//Program for Sum of Digits of a Number
#include <iostream>
using namespace std;
int main()
{
int n,r,sum=0;
 cout<<"Enter a no. ";
 cin>>n;
 //error in the below segment
//-------------
while(n>0)
 {
 r=n%10;
 n=n/10;
 sum=sum+r;
 }
 //-------------
 cout<<sum;
 cout<<endl;
}
