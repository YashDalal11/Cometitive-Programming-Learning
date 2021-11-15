#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[min_index]>a[j]){
                min_index=j;
            }
        }
        swap(a[min_index],a[i]);
    }
}

void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    selectionSort(a,n);
    printArray(a,n);
    return 0;
}