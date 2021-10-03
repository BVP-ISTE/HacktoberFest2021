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
	if (n <= 2) return n;
	int ans = 0, tmp = 1, i = 1, cnt = 0;
	bool flag = false;
	while (i < n - 1)
	{
		if (arr[i - 1] == arr[i]) ++cnt;
		else cnt = 1;
		if (arr[i - 1] > arr[i]) flag = true;
		else if (arr[i - 1] < arr[i]) flag = false;
		if (flag and arr[i - 1] >= arr[i] and arr[i] < arr[i + 1])
		{
			++tmp;
			ans = max(ans, tmp);
			tmp = max(cnt, 1);

		}
		else ++tmp;
		++i;
	}
	++tmp;
	ans = max(ans, tmp);
	return ans;

}

//write code in the above function only


int main() {
	int t, n;
	cin >> t;

	for (int a = 1; a <= t; a++) {
		cin >> n;

		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		cout << bitonic(arr, n) << endl;
	}
	return 0;
}
