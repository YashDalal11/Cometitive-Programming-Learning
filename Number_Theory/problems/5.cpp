#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll diff= x-y;
        if(diff<=1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}