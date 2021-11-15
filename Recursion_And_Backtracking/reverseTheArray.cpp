#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

void reverseArray(int arr[], int initialpoint, int lastpoint)
{
    if (initialpoint > lastpoint)
    {
        return;
    }
    swap(arr[initialpoint], arr[lastpoint]);
    reverseArray(arr, initialpoint + 1, lastpoint - 1);
}

int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    reverseArray(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
