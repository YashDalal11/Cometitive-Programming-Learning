#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << s[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}