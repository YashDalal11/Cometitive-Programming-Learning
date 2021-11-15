#include <bits/stdc++.h>
using namespace std;
#define m 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

void solve(int d){
    vector<int> p;
    for(int i=1+d;;i++){
        int t=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                t=0;
                break;
            }
        }
        if(t){
            p.push_back(i);
            break;
        }
    }
    for(int i=p[0]+d;;i++){
        int t=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                t=0;
                break;
            }
        }
        if(t){
            p.push_back(i);
            break;
        }
    }
    cout<<(p[0]*p[1])<<"\n";

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        solve(d);
    }
    return 0;
}