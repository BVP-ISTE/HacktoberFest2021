//Pair Sum

#include <bits/stdc++.h>
using namespace std;

int pairSum(int *input, int size, int x)
{
	int i,j,count=0;
	unordered_map<int,int> umap;
	for(int i=0;i<size;i++){
    int numberToFind = x - input[i];
		if (umap.find(numberToFind) != umap.end()) {
			count++;
		}
		umap[input[i]] = i;
	}
    return count;
}
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
