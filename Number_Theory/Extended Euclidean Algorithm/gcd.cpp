#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n";
    return 0;
}