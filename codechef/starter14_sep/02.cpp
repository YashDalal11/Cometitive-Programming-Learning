#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
        }
        int g = 0;
        for (int i = 0; i < n; i++)
        {
            g = __gcd(g, a[i]);
        }
        int ans=0;
        while(!(g&1)){
            ans++;
            g >>=1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}