#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;
const int n = 4;

bool isRowSafe(int board[][4],int row,int num){
    for(int i=0;i<n;i++){
        if(board[row][i]==num){
            return false;
        }
    }
    return true;
}

bool isColSafe(int board[][4],int col,int num){
    for(int i=0;i<n;i++){
        if(board[i][col]==num){
            return false;
        }
    }
    return true;
}

bool isBoxSafe(int board[][4],int row,int col,int num){
    int sq =(int)std::sqrt(n);
    int rowStart = row - (row % sq);
    int colStart = col - (col % sq);

    for(int i=rowStart;i<rowStart+2;i++){
        for(int j=colStart;j<colStart+2;j++){
            if(board[i][j]==num){
                return false;
            } 
        }
    }
    return true;
}

bool canPlaceNum(int board[][4], int row, int col, int num)
{
    if (!isRowSafe(board, row, num))
    {
        return false;
    }
    if (!isColSafe(board, col, num))
    {
        return false;
    }
    if (!isBoxSafe(board, row, col, num))
    {
        return false;
    }
    return true;
}

bool sudoku(int board[n][n])
{
    int row = -1, col = -1;
    bool isEmpty = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0)
            {
                isEmpty = true;
                row = i;
                col = j;
                break;
            }
        }
        if (isEmpty)
        {
            break;
        }
    }
    if (!isEmpty)
    {
        return true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (canPlaceNum(board, row, col, i))
        {
            board[row][col] = i;
            if (sudoku(board))
            {
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}

int main()
{

    int board[][4] = {{1, 0, 2, 4}, {0, 0, 3, 1}, {3, 4, 0, 2}, {0, 0, 4, 3}};
    cout << sudoku(board)<<endl;
    return 0;
}