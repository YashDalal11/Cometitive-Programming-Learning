#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int friends_Pairing(int n){
    if(n==0 || n==1 ||n==2){
        return n;
    }

    return friends_Pairing(n-1)+(friends_Pairing(n-2)*(n-1));
}

int main()
{
    
    cout<<friends_Pairing(4);
    return 0;
}