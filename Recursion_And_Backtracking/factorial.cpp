#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}