//Find Unique

#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    int i,j;
    bool num=true;
    for(i=0;i<size;i++){
        bool f=false;
        for(j=0;j<size;j++){
            if(j==i){
                continue;
            }
            if(arr[i]==arr[j]){
                
                break;
            }

        }

        if(f==false){
            return arr[i];
        }

        }
    }



int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}
		cout << findUnique(input, size) << endl;
	}

	return 0;
}
