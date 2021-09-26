#include<bits/stdc++.h> 
#define MAX 1000000 
using namespace std; 
  
// array to store all primes less than 10^6 
vector<int> primes; 
  
// Utility function of Sieve of Sundaram 
void Sieve() 
{ 
    int n = MAX; 
  
    // In general Sieve of Sundaram, produces primes 
    // smaller than (2*x + 2) for a number given 
    // number x 
    int nNew = sqrt(n); 
  
    // This array is used to separate numbers of the 
    // form i+j+2ij from others where  1 <= i <= j 
    int marked[n/2+500] = {0}; 
  
    // eliminate indexes which does not produce primes 
    for (int i=1; i<=(nNew-1)/2; i++) 
        for (int j=(i*(i+1))<<1; j<=n/2; j=j+2*i+1) 
            marked[j] = 1; 
  
    // Since 2 is a prime number 
    primes.push_back(2); 
  
    // Remaining primes are of the form 2*i + 1 such 
    // that marked[i] is false. 
    for (int i=1; i<=n/2; i++) 
        if (marked[i] == 0) 
            primes.push_back(2*i + 1); 
} 
  
// modified binary search to find nearest prime less than N 
int binarySearch(int left,int right,int n) 
{ 
    //complete the binary search function
} 
  
// Driver program to run the case 
int main() 
{ 
    Sieve(); 
    int n = 17; 
    cout << binarySearch(0, primes.size()-1, n); 
    return 0; 
} 
