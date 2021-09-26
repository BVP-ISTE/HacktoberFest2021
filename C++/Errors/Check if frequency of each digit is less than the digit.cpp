// A C++ program to validate a number 
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to validate number (Check if 
// frequency of a digit is less than the 
// digit itself or not) 
bool validate(long long int n) 
//find the error in bool function
{ 
    for (int i=0; i<10; i++) 
    { 
        long long int temp = n;  
        int count = 10; 
        while (temp) 
        { 
            // If current digit of temp is 
            // same as i 
            if (temp % 10 == i) 
                count++; 
  
            // if frequency is greater than  
            // digit value, return false 
            if (count > i) 
                return false; 
  
            temp /= 10; 
        } 
    } 
    return true; 
} 
  
// driver program 
int main() 
{ 
    long long int n = 1552793; 
    if (validate(n)) 
        cout << "True"; 
    else
        cout << "False"; 
    return 0; 
}  
