#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i-1];
        }
        
        deque<int> d;
        d.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(d.front()>a[i]){
                d.push_front(a[i]);
            }
            else{
                d.push_back(a[i]);
            }
        }
        for(int i:d){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}