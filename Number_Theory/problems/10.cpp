#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int sum=n;
    while(n>1){
        int i=2;
        while(true){
            if(n%i==0){
                n/=i;
                sum+=n;
                break;
            }
            i++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}