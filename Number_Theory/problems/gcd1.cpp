#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n>1000){
        cout<<0<<endl;
    }
    else{
        long long ans=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans *=abs(a[i]-a[j]);
                ans =ans%m;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}