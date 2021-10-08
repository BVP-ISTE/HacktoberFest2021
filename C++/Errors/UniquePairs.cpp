#include <stdio.h> 
#include <stdlib.h> 
  
// Finding the number of unique pairs 
int No_Of_Pairs(int N) 
{ 
    int i = 1; 
  
    // Using the derived formula 
    while ((i * i * i) + (2 * i * i) + i <= N) 
        i++; 
  
    return (i - 1); 
} 
  
// Printing the unique pairs 
void print_pairs(int pairs) 
{ 
    int i = 1, mul; 
    for (i = 1; i <= pairs; i++) { 
        mul = i * (i + 1); 
        printf("Pair no. %d --> (%d, %d)\n", 
               i, (mul * i), mul * (i + 1)); 
    } 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int N = 500, pairs, mul, i = 1; 
    pairs = No_Of_Pairs(N); 
  
    printf("No. of pairs = %d \n", pairs); 
    print_pairs(pairs); 
  
    return 0; 
} 
