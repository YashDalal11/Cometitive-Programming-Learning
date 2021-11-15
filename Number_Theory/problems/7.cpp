#include <bits/stdc++.h>
using namespace std;
#define m 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a>>b;
        if(b==1){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        cout << a << " " << (a * b) << " " << (a * (b + 1)) << "\n";
    }
    return 0;
}