#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
#define N 9
typedef vector<int> vi;
typedef long long ll;

bool isRowSafe(int grid[N][N], int x, int y, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (grid[x][i] == num)
        {
            return false;
        }
    }
    return true;
}
bool isColSafe(int grid[N][N], int x, int y, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (grid[i][y] == num)
        {
            return false;
        }
    }
    return true;
}
bool isBoxSafe(int grid[N][N], int x, int y, int num)
{
    int sq = (int)sqrt(N);
    int row = x - (x % sq);
    int col = y - (y % sq);
    for (int i = row; i < row + sq; i++)
    {
        for (int j = col; j < col + sq; j++)
        {
            if (grid[i][j] == num)
            {
                return false;
            }
        }
    }
    return true;
}
bool canPlaceNum(int grid[N][N], int x, int y, int num)
{
    if (!isRowSafe(grid, x, y, num))
    {
        return false;
    }
    if (!isColSafe(grid, x, y, num))
    {
        return false;
    }
    if (!isBoxSafe(grid, x, y, num))
    {
        return false;
    }
    return true;
}
bool sudoku(int grid[N][N])
{
    int row = -1, col = -1;
    bool isEmpty = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j] == 0)
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

    for (int i = 1; i <= N; i++)
    {
        if (canPlaceNum(grid, row, col, i))
        {
            grid[row][col] = i;
            if (sudoku(grid))
            {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}
// Function to find a solved Sudoku.
bool SolveSudoku(int grid[N][N])
{
    // Your code here

    if (sudoku(grid))
    {
        return true;
    }
    return false;
}

// Function to print grids of the Sudoku.
void printGrid(int grid[N][N])
{
    // Your code here
    if (SolveSudoku(grid))
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Nothing TO print\n";
    }
}

int main()
{
    int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0},
    };
    printGrid(grid);
    return 0;
}