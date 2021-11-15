#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

bool sortedOrNot(int *arr, int n)
{
    if (n == 1)
    {
        return true;
    }
    bool lastans = sortedOrNot(arr + 1, n - 1);
    return (arr[0] < arr[1] && lastans);
}

int main()
{
    int arr[5] = {5, 6, 1, 8, 9};
    cout << (sortedOrNot(arr, 5) ? "sorted" : "Not Sorted") << endl;
    return 0;
}