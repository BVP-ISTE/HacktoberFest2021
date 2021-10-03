//Sum of N natural numbers
#include<stdio.h>
//error in the below segment
//-------------
int sum(int n)
{
  if(n==0)
    return 0;
  return sum(n-1)+n;
}
//-------------

int main()
{
  int r=sum(6);
  printf("%d ",r);
  return 0;
}
