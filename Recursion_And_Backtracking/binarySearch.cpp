#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int binarySearch(int *arr, int n, int x)
{
    if (n == 1)
    {
        return arr[0] == x ? 0 : -1;
    }
    int ans = -1;
    if (arr[n / 2] == x)
    {
        return n / 2;
    }
    else if (arr[n / 2] > x)
    {
        ans = binarySearch(arr, (n / 2), x);
    }
    else
    {
        ans = binarySearch(arr + (n / 2), (n + 1) / 2, x);
        ans = ans != -1 ? ans + (n / 2) : ans;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 5, 6) << endl;
    return 0;
}