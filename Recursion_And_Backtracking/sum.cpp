#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}