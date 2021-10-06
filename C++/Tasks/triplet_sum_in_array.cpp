#include <iostream>
using namespace std;

//You have been given a random integer array/list(ARR) and a number X.
//Find and return the triplet(s) in the array/list which sum to X.

int tripletSum(int *input, int size, int x) {
	int cnt = 0;
	for (int i = 0; i < size - 2; i++)
	{
		for (int j = i + 1; j < size - 1; j++)
		{
			for (int k = j + 1; k < size; k++)
			{
				if (input[i] + input[j] + input[k] == x) {
					++cnt;
				}
			}
		}
	}

	return cnt;
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
