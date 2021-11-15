#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int tiling_problem(int n){
    if(n==1 || n==2){
        return n;
    }

    return tiling_problem(n-1)+tiling_problem(n-2);
}

int main()
{
    cout<<tiling_problem(3);
    return 0;
}