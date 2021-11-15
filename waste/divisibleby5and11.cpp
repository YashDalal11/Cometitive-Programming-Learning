#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int n;
    cin>>n;

    if(n%5==0 && n%11==0){             //check n is divisible by 5 and 11
        cout<<"BOTH"<<endl;
    }
    else if(n%5==0 || n%11==0){       // check n is divisible by 5 or 11
        cout<<"ONE"<<endl;
    }
    else{                             // when n is not divisible by 5 and 11
        cout<<"NONE"<<endl;
    }
    return 0;
}