/*

problem question-

You are provided n numbers of array. 
You need to find the maximum length of bitonic subarray. 
A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] 
i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.

Input Format
First line contains integer t which is number of test case. 
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers.


Output Format
Print the maximum length.



Sample Input
2
6
12 4 78 90 45 23
4
40 30 20 10


Sample Output
5
4


*/



#include<iostream>
using namespace std;


//write code inside this bitonic function only
//do not modify code above or below this function
//complete the function to execute the code

int bitonic(int arr[], int n)
{
    if (n == 0)
        return 0;
         
    int maxLen=1;
         
    int start=0;
    int nextStart=0;
         
    int j =0;
    while (j < n-1)
    {
        while (j<n-1 && arr[j]<=arr[j+1])
            j++;
             
        while (j<n-1 && arr[j]>=arr[j+1]){
            if (j<n-1 && arr[j]>arr[j+1])
                nextStart=j+1;
                 
            j++;
        }
             
        maxLen = max(maxLen,j-(start-1));
             
        start=nextStart;
    }
         
    return maxLen;

}

//write code in the above function only


int main() {
	int t, n;
	cin>>t;

	for(int a=1; a<=t; a++){
		cin>>n;

		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}

		cout<<bitonic(arr,n)<<endl;
	}
	return 0;
}
