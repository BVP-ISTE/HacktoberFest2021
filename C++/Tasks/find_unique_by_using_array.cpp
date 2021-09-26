#include <iostream>
using namespace std;

//You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
//You need to find and return that number which is unique in the array/list.

int findUnique(int *arr, int size){





}

//all changes to be made in the above function only
//no changes to be made below this line

int main()
{
	int t;
	cin >> t;
	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; ++i){
			cin >> input[i];
		}
		cout << findUnique(input, size) << endl;
	}
	return 0;
}
