//Check Permutation

#include <bits/stdc++.h>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
	int len1 = strlen(input2);
	int len2 = strlen(input1);
	if (len1 != len2) {
		return false;
	}
	//sorted both string alphabetical order.
	sort(input1, input1 + len1);
	sort(input2, input2 + len2);
	//if two sorted string have same character then it's permutaion of each other.
	if (strcmp(input1, input2) == 0) return true;
	//else their are not permutaion.
	return false;
}


int main() {
	char input1[1000], input2[1000];
	cin.getline(input1, 1000);
	cin.getline(input2, 1000);
	if (isPermutation(input1, input2) == 1) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}
