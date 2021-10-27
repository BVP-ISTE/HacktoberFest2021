#include<iostream>
using namespace std;

//Given an array of length N and an integer x, you need to find if x is present in the array or not. 
//Return true or false.  Do this recursively.

bool checkNumber(int input[], int size, int x) {
  
  bool num=0;
  
  
  
  if(size==1)
  {
      if(input[0]==x)
      {
          return true;
      }
      else
      {
          return false;
      }
  }
  else if(input[0]==x)
  {
      return true;
  }
  else
  {
      num=checkNumber(input+1,size-1,x);
      return num;
      
  }
 



}

int main()
{

  int n,x,i;
 cin>>n>>x;
 int a[n];
 for(i=0;i<n;i++)
     cin>>a[i];
 bool out;
 out=checkNumber(a,n,x);
if(out) cout<<x<<" is present "<<endl;
else cout<<x<<" is not present "<<endl;

return 0;
    
}
