#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll k,x;
        cin>>k>>x;
        ll ans = x+ (k-1)*9;
        cout<<ans<<"\n";
    }
    return 0;
}