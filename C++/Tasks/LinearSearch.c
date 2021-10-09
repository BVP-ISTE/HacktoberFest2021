#include <stdio.h>
 
int linearSearch(int ar[], int n, int x , int count)
{
    int i ;
    
    for (i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            printf("%d is present at position %d.\n", x, i+1);
            count++;
        }
    }
    return count;
}
 
int main()
{
    int ar[100] , x , n , count = 0;
    
    printf("Enter the number of elements : ");
    scanf("%d" , &n);
    
    printf("Enter the elements of array \n");
    for(int i = 0 ; i<n ; i++)
        scanf("%d" , &ar[i]);
    
    printf("Enter the element to be searched : ");
    scanf("%d" , &x);
 
    int pos = linearSearch(ar, n, x, count);
    
    if (pos == 0)
          printf("%d isn't present in the array.\n", x);
       else
          printf("%d is present %d time(s) in the array.\n", x, pos);
    
    return 0;
}
