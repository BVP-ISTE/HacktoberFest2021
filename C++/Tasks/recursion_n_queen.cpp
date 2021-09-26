#include <iostream>
using namespace std;

//You are given an empty chess board of size N*N. Find the number of ways to place N queens on the board, such that no two queens can kill each other in one move. 
//A queen can move vertically, horizontally and diagonally.
//you have to provide N as the input and 10 is the maximum size of the board


//------------------------------------------------------------------------------

/*
for ex- board of size N*N
final output -
            
              . Q . . 
              . . . Q 
              Q . . . 
              . . Q .
            
              . . Q . 
              Q . . . 
              . . . Q 
              . Q . .    
              
              
//----------------------------------------------------------------------------------------              
//write code below this line only. do not modify the code already written. you can add functions but cannot subtract any.
//the output should show the position of each queen in each row

*/

bool solveNQueen(int board[][10], int i, int n){
   
}

int main() {
    int n;
    cin>>n;

    int board[10][10]{0};

    solveNQueen(board, 0, n);

    return 0;
}
