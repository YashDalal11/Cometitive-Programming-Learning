#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7
typedef vector<int> vi;
typedef long long ll;
string mul(string s,int k){
    string res="";
    while(k--){
        res += s;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n= s.length(),l = t.length();
        int g = __gcd(n,l);
        if(mul(s,l/g) == mul(t,n/g)){
            cout<<mul(s,l/g)<<"\n";
        }
        else{
            cout<<"-1\n";
        }

    }
    return 0;
}