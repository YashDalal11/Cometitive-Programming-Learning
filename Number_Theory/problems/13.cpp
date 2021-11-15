#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    bool prime[100];
    for (int i = 2; i < 100; i++)
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
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        bool flag=false;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
            {
                cout << "1\n"
                     << s[i] << "\n";
                     flag=true;
                    break;
            }
        }
        if(flag){
            continue;
        }
        
        for (int i = 0; i < k; i++)
        {
            for (int j = i + 1; j < k; j++)
            {
                if (!prime[int(s[i] - '0') * 10 + int(s[j] - '0')])
                {
                    cout << "2\n"
                         << s[i] << s[j] << "\n";
                         flag=true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
    }
    return 0;
}