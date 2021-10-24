#include <bits/stdc++.h>
using namespace std;

/** CPP Program to Find Exit Point Of A Matrix

1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers (1's and 0's), representing elements of 2d array.
4. Consider this array a maze and a player enters from top-left corner in east direction.
5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.

**/

signed main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int i = 0;
    int j = 0;
    int dir = 0;
    while (true) 
    {
        dir = (dir + matrix[i][j]) % 4;
        if (dir == 0) {
            j++;
        } else if (dir == 1) {
            i++;
        } else if (dir == 2) {
            j--;
        } else if (dir == 3) {
            i--;
        }
    
        if (i < 0) {
            i++;
            break;
        } else if (j < 0) {
            j++;
            break;
        } else if (i == n) {
            i--;
            break;
        } else if (j == m) {
            j--;
            break;
        }
    }
    
    cout<<i<<endl;
    cout<<j<<endl;
}