#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    
    int dp[n][n]={0};
    for(int i=0;i<n;i++){
        dp[n-1][i]=1;
    }
    for(int i=0;i<n;i++){
        dp[i][n-1]=1;
    }

    for(int i=n-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            dp[i][j]=dp[i+1][j]+dp[i][j+1];
        }
    }
    cout<<dp[0][0];
    return 0;
}