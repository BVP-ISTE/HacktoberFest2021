#include <bits/stdc++.h> 
using namespace std; 
  
// Iterative function to 
// reverse digits of num 
int rev(int num) 
{ 
    int rev_num = 0; 
  
    // Loop to extract all 
    // digits of the number 
    while (num > 0) { 
        rev_num 
            = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 
  
// Function to check if N 
// satisfies given equation 
bool check(int n) 
{ 
   //complete bool function
} 
  
// Driver Code 
int main() 
{ 
    int n = 73; 
    if (check(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
}
