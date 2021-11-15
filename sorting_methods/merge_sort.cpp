#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

void merge(int a[],int p,int mid,int r){
    int n1 = mid-p+1;
    int n2 = r-mid;

    int l[n1],m[n2];
    for(int i=0;i<n1;i++){
        l[i]=a[p+i];
    }
    for(int i=0;i<n2;i++){
        m[i]=a[mid+1+i];
    }

    int i=0,j=0,k=p;
    while(i<n1 && j<n2){
        if(l[i]<=m[j]){
            a[k]=l[i];
            i++;
        }
        else{
            a[k]=m[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=m[j];
        j++;
        k++;
    }

}

void mergeSort(int a[],int p,int r){
    if(p<r){
        int mid = (p+r)/2;
        mergeSort(a,0,mid);
        mergeSort(a,mid+1,r);
        merge(a,p,mid,r);
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
    mergeSort(a,0,n);
    printArray(a,n);
    return 0;
}