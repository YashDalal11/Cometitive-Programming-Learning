#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }     
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[], int low ,int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    } 
}
int main()
{
    int arr[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(auto v:arr){
        cout<<v<<" ";
    }
    return 0;
}