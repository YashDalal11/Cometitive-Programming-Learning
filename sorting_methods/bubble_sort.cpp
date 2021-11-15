#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;


void bubblesort(int *a,int n){
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
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

    bubblesort(a, n);
    printArray(a,n);
    return 0;
}