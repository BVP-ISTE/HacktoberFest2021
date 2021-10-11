#include<stdio.h>
  
int binarySearch(int ar[], int low, int high, int x)
{
   while(low <= high)
   
    {
        int mid = low + (high-1)/2;
       
        if(ar[mid] == x)
        {
            return mid;
        }
        else if(ar[mid] < x)
        {
            return binarySearch(ar,mid+1,high,x);
        }
        else
        {
            return binarySearch(ar,low,mid-1,x);
        }
      
    }
    return -1;
}
int main()
{
    int ar[20] , x , n  ;
    printf("Enter the number of elements : ");
    scanf("%d" , &n);
   
   
    printf("Enter the elements of array \n");
    
      for(int i = 1 ; i<=n ; i++)
          scanf("%d" , &ar[i]);
    
   
    printf("Enter the element to be searched : ");
    scanf("%d" , &x);
 
   
    int pos = binarySearch(ar, 1 , n-1 , x);
    
    if(pos == -1)
        printf("Element is not present in array");
        
        else
            printf("Element is present at position %d\n", pos);
    
    return 0;
}
