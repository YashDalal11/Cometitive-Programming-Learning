#include <bits/stdc++.h>
using namespace std;
#define m 1e9 + 7
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n & 1)
        {
            cout << "YES\n";
            continue;
        }
        while (!(n & 1))
        {
            n /= 2;
        }

        if (n != 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}