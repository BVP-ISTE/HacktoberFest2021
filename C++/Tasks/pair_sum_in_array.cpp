#include <iostream>
using namespace std;

//You have been given an integer array/list(ARR) and a number X. 
//Find and return the total number of pairs in the array/list which sum to X.

int pairSum(int *input, int size, int x){
	//Write your code here
  	int count = 0; 

	    for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
		    if (input[i] + input[j] == x)
			count++;

	    return count;
}

//all changes to be made in the above function only
//no changes to be made below this line

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}
