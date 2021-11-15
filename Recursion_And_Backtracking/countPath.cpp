#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int countPath(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countPath(n-i);
    }
    return count;
}

int main()
{
    cout<<countPath(6)<<endl;
    return 0;
}