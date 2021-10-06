// Find Duplicate

#include <bits/stdc++.h>
using namespace std;

int duplicateNumber(int *arr, int size)
{
  int i, j;

  for (i = 0; i < size; i++) {

    for (j = 0; j < size; j++) {
      if (j == i) {
        continue;

      }

      if (arr[i] == arr[j]) {
        return arr[j];
      }


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

    for (int i = 0; i < size; i++)
    {
      cin >> input[i];
    }

    cout << duplicateNumber(input, size) << endl;
  }
  return 0;
}
