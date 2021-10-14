#include <iostream>
#include <unordered_map>
using namespace std;

//You have been given an integer array/list(ARR) and a number X. 
//Find and return the total number of pairs in the array/list which sum to X.

//updated code with a much lesser time complexity

int pairSum(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            count += 1;
        }
        m[arr[i]]++;
    }
    return count;
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

        int result;

		result= pairSum(input, size, x) ;
        cout<<result<<endl;

		
	}
	
	return 0;
}
