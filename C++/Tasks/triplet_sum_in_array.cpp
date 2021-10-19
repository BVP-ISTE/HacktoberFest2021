#include <iostream>
using namespace std;

//You have been given a random integer array/list(ARR) and a number X.
//Find and return the triplet(s) in the array/list which sum to X.
int countTripletsLessThan(int arr[], int n, int val)
{
    sort(arr, arr + n);
    int ans = 0;
 
    int j, k;
    int sum;

    for (int i = 0; i < n - 2; i++) {
        j = i + 1;
        k = n - 1;

        while (j != k) {
            sum = arr[i] + arr[j] + arr[k];
            if (sum > val)
                k--;
            else {
                ans += (k - j);
                j++;
            }
        }
    }
 
    return ans;
}

int tripletSum(int *input, int size, int x) {
    int res;
    res = countTripletsLessThan(arr, n, b) -
        countTripletsLessThan(arr, n, a - 1);
 
    return res;
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
