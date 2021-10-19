#include <iostream>
#include <map>
using namespace std;

//You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2).
//Each number is present at least once. That is, if N = 5, the array/list constitutes
//values ranging from 0 to 3 and among these, there is a single integer value that is present twice.
//You need to find and return that duplicate number present in the array.

int duplicateNumber(int arr[], int size) {
    
    map<int,int>m;
    int flag;
  for (int i = 0; i < size - 1; i++)
  {
     flag=0;
    
    m[arr[i]]++;
    
  }
  for(auto i:m)
    {
        if(i.second>1)
        {
            flag=i.first;
        }
        
    }

  return flag;

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
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
      cin >> input[i];
    }

    int res=duplicateNumber(input, size);
    cout<<res<<endl;
  }

  return 0;
}
