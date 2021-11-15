#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

void insertion_sort(int a[],int n){
    for(int i=1;i<n;i++){
        int temp = a[i];
        int j=i-1;
        while(temp<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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

    insertion_sort(a,n);
    printArray(a,n);
    return 0;
}