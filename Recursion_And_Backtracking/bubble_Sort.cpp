#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

void bubbleSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {80, 8, 57, 69, 30};
    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}