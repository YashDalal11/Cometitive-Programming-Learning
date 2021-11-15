#include<bits/stdc++.h>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;
#define m 1e9+7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(int &x:a){
            cin>>x;
        }
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int itr = max_element(a.begin(),a.end())-a.begin();
            if(itr!=n-i-1){
                ans.push_back({itr+1,n-i,1});
            }
            a.erase(a.begin()+itr);
            
        }
        cout<<ans.size()<<"\n";
        for(auto v: ans){
            cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
        }
    }
    return 0;
}