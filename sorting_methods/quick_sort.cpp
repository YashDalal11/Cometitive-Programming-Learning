#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int partition(int a[],int low,int high){
  int pivot = a[high];
  int i = low-1;

  for(int j=low;j<high;j++){
    if(a[j]<=pivot){
      i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[high]);
  return i+1;
}

void quicksort(int a[],int low,int high){
  if(low<high){
    int pi = partition(a,low,high);

    quicksort(a,low,pi-1);
    quicksort(a,pi+1,high);
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
    quicksort(a,0,n-1);
    printArray(a,n);
    return 0;
}