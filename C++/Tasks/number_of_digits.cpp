#include<iostream>
using namespace std;

//Given the code to find out and return the number of digits present in a number recursively.
//But it contains few bugs, that you need to rectify such that all the test cases should pass.

int count(int n) {
	if (n == 0) {
		return 0;
	}
	int smallAns = count(n / 10);
	return smallAns + 1;
}

//no changes to be made below this line.

int main() {
	int n;
	cin >> n;
	cout << count(n) << endl;
}
