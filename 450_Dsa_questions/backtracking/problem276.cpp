#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

bool isSafe(int **board, int n, int x, int y)
{
    for (int i = x; i >= 0; i--)
    {
        if (board[i][y] == 1)
        {
            return false;
        }
    }

    int row = x, col = y;
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    row = x, col = y;
    while (row >= 0 && col < n)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

void solvenQueens(int **board, int n, int x)
{
    if (x >= n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << "------------\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(board, n, x, i))
        {
            board[x][i] = 1;
            solvenQueens(board, n, x + 1);
            // if (solvenQueens(board, n, x + 1))
            // {
            //     return true;
            // }
            board[x][i] = 0;
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int **board = new int *[n];
    for (int i = 0; i < n; i++)
    {
        board[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }
    solvenQueens(board, n, 0);
    // if (solvenQueens(board, n, 0))
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << board[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    return 0;
}