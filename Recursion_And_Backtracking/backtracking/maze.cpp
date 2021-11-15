#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

bool findpath(int maze[][20], int n, int x, int y, int path[][20])
{
    // base case
    if (x < 0 || y < 0 || x >= n || y >= n)
    {
        return false;
    }
    if (maze[x][y] == 0 || path[x][y] == 1)
    {
        return false;
    }
    if (x == n - 1 && y == n - 1)
    {
        path[x][y] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    path[x][y] = 1;

    // right
    if (findpath(maze, n, x, y + 1, path))
    {
        path[x][y] = 0;
        return true;
    }
    // left
    if (findpath(maze, n, x, y - 1, path))
    {
        path[x][y] = 0;
        return true;
    }
    // top
    if (findpath(maze, n, x - 1, y, path))
    {
        path[x][y] = 0;
        return true;
    }
    // bottom
    if (findpath(maze, n, x + 1, y, path))
    {
        path[x][y] = 0;
        return true;
    }

    path[x][y] = 0;
    return false;
}

bool findpath(int maze[][20], int n)
{
    int path[20][20] = {0};
    findpath(maze, n, 0, 0, path);
}

int main()
{

    int n = 3;
    int maze[20][20] = {{1, 1, 0}, {1, 1, 0}, {0, 1, 1}};
    cout << findpath(maze, n);
    return 0;
}