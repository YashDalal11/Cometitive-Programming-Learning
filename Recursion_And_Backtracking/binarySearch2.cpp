#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int binarySearch(int arr[], int l, int r, int x)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << binarySearch(arr, 0, 4, 50);
    return 0;
}