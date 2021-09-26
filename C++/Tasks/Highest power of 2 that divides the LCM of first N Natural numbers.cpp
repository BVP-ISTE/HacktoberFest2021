#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find LCM of 
// first N natural numbers 
int findlcm(int n) 
{ 
    // Initialize result 
    int ans = 1; 
  
    // Ans contains LCM of 1, 2, 3, ..i 
    // after i'th iteration 
    for (int i = 1; i <= n; i++) 
        ans = (((i * ans)) / (__gcd(i, ans))); 
    return ans; 
} 
  
// Function to find the 
// highest power of 2 
// which divides LCM of 
// first n natural numbers 
int highestPower(int n) 
{ 
    // Find lcm of first 
    // N natural numbers 
    int lcm = findlcm(n); 
  
    // To store the highest 
    // required power of 2 
    int ans = 0; 
  
    // Counting number of consecutive zeros 
    // from the end in the given binary string 
    for (int i = 1;; i++) { 
        //complete for loop
        } 
        if (x > n) 
            break; 
    } 
    return ans; 
} 
  
// Driver code 
int main() 
{ 
    int n = 15; 
    cout << highestPower(n); 
    return 0; 
}
