//solve this question using arrays only
/*
problem question-
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Input Format ->
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Output Format ->
Print a single integer containing the maximum unit of waters she can save.

ex:- 
    sample input -
                    10
                    0 2 1 3 0 1 2 1 2 1
                    
                    
    sample output-
                  5



*/

//code -


#include<iostream>
using namespace std;

//write code below this line only
// do not modify code above this line

int maxWater(int arr[], int n){

}

//do not modify code below this line


int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	cout<<maxWater(arr,n)<<endl;
	return 0;
}
