
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
