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
        int n, k;
        cin >> n >> k;
        if (n == k + 1)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            if (i <= k)
            {
                cout << i << " ";
            }
            else if (i == n)
            {
                cout << k + 1 << " ";
            }
            else
            {
                cout << (i + 1) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}