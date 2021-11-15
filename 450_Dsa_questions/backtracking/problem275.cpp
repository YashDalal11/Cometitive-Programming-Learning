#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
#define MAX 5
typedef vector<int> vi;
typedef long long ll;

bool issafe(vector<vector<int>> &m, int n, int x, int y, int path[][MAX])
{
    if (x < 0 || y < 0 || x >= n || y >= n || m[x][y] == 0 || path[x][y] == 1)
    {
        return false;
    }
    return true;
}

void findPath(vector<vector<int>> &m, int n, int x, int y, string &ans_str, vector<string> &ans_vec, int path[][MAX])
{
    if (x < 0 || y < 0 || x >= n || y >= n)
    {
        return;
    }
    if (m[x][y] == 0 || path[x][y] == 1)
    {
        return;
    }
    if (x == n - 1 && y == n - 1)
    {
        ans_vec.push_back(ans_str);
        return;
    }

    path[x][y] = 1;

    // Down
    if (issafe(m, n, x + 1, y, path))
    {
        ans_str += 'D';
        findPath(m, n, x + 1, y, ans_str, ans_vec, path);
        ans_str.pop_back();
    }

    // left
    if (issafe(m, n, x, y - 1, path))
    {
        ans_str += 'L';
        findPath(m, n, x, y - 1, ans_str, ans_vec, path);
        ans_str.pop_back();
    }

    // right
    if (issafe(m, n, x, y + 1, path))
    {
        ans_str += 'R';
        findPath(m, n, x, y + 1, ans_str, ans_vec, path);
        ans_str.pop_back();
    }
    // Up
    if (issafe(m, n, x - 1, y, path))
    {
        ans_str += 'U';
        findPath(m, n, x - 1, y, ans_str, ans_vec, path);
        ans_str.pop_back();
    }

    path[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    vector<string> ans_vec;
    int path[n][MAX] = {0};
    string ans_str = "";
    findPath(m, n, 0, 0, ans_str, ans_vec, path);
    return ans_vec;
}
int main()
{
    vector<vector<int>> m{{1, 0, 0, 0},
                          {1, 1, 0, 1},
                          {1, 1, 0, 0},
                          {0, 1, 1, 1}};
    int n = sizeof(m) / sizeof(m[0]);
    // cout<<sizeof(m)<<" "<<sizeof(m[0]);
    vector<string> paths = findPath(m, 4);
    for (int i = 0; i < paths.size(); i++)
    {
        cout << paths[i] << " ";
    }
    return 0;
}