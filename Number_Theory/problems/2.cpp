#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0 0\n";
            continue;
        }
        if(a<b){
            a ^=b;
            b = a^b;
            a ^=b;
        }
        ll gcd = a-b;
        ll ans = min(b%gcd,gcd-b%gcd);
        cout<<gcd<<" "<<ans<<"\n";
    }
    return 0;
}