#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int a1[n1], a2[n2];

    for (int i = 0; i < n1; i++)
    {
        a1[i]=arr[low + i] ;
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            arr[k] = a1[i];
            i++;
        }
        else if (a1[i] >= a2[j])
        {
            arr[k] = a2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = a1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = a2[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {90,80,70,60,50,40,30,20,1070};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for(auto v:arr){
        cout<<v<<" ";
    }
    return 0;
}