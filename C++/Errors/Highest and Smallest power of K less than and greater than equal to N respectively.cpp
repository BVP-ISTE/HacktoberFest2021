#include <bits/stdc++.h>
using namespace std;
 
// Function to return the highest power
// of k less than or equal to n
int prevPowerofK(int n, int k)
{
    int p = (int)(log(n) / log(k));
    return (int)pow(k, p);
}
 
// Function to return the smallest power
// of k greater than or equal to n
int nextPowerOfK(int n, int k)
{
    return prevPowerofK(n, k) * k;
}
 
// Function to print the result
void printResult(int n, int k)
{
//find the error in the function
    cout << prevPowerofK(n, k)
         << " " << nextPowerOfK(n,k)
         << endl;
}
 
// Driver code
int main()
{
    int n = 25, k = 3;
 
    printResult(n, k);
 
    return 0;
}
