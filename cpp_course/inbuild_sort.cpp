#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int size = sizeof(a)/sizeof(a[0]);
    cout<<"size: "<<size<<"\n";
    sort(a,a+size);
    for(int v:a){
        cout<<v<<" ";
    }

}