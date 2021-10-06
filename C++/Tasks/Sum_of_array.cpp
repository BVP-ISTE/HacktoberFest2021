#include<iostream>
using namespace std;

//Given an array of length N, you need to find and return the sum of all elements of the array.
//Do this recursively.

int add;

int sum(int input[], int n) {
	if (n == 0) return input[0];
	return input[n] + sum(input, n - 1);
}


int main() {
	int n;
	cin >> n;

	int *input = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	cout << sum(input, n) << endl;
}


