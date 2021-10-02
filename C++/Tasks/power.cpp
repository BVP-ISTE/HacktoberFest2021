#include<iostream>
using namespace std;

//Write a program to find x to the power n (i.e. x^n).
//Take x and n from the user. You need to return the answer.
//Do this recursively.

int power(int x, int n) {
	if (n == 0) return 1;
	if (n & 1) return  x * power(x * x, n / 2);
	return power(x * x, n / 2);
}

int main() {
	int x, n;
	cin >> x >> n;

	cout << power(x, n) << endl;
}

