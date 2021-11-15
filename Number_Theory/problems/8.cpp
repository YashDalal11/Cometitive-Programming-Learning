#include <bits/stdc++.h>
using namespace std;
#define m 1e9 + 7
#define REP(i, a, b) for (int i = a; i <= b; i++)
typedef vector<int> vi;
typedef long long ll;

void solve(int n, string s, bool *prime)
{
    REP(i, 0, n - 1)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
        {
            cout << 1 << "\n";
            cout << s[i] << "\n";
            return;
        }
    }
    REP(i, 0, n - 1)
    {
        REP(j, i + 1, n - 1)
        {
            if (!prime[(s[i] - '0') * 10 + (s[j] - '0')])
            {
                cout << "2\n";
                cout << s[i] << s[j] << "\n";
                return;
            }
        }
    }
    // exit(42);
}
int main()
{
    int t;
    cin >> t;
    bool prime[100];
    REP(i, 2, 99)
    {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime[i] = false;
            }
        }
    }
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        solve(n, s, prime);
        // cout<<prime[s[25]*10 + s[20]];
    }
    return 0;
}