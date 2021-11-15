#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "1\n";
    else if (n == 2)
        cout << "11\n";
    string no = "11";
    n -= 2;
    while (n--)
    {
        no += "$";
        string str = "";
        int cnt = 1;
        for (int i = 1; i < no.length(); i++)
        {
            if (no[i] != no[i - 1])
            {
                str += cnt + '0';
                str += no[i - 1];
                cnt = 1;
            }
            else
                cnt++;
        }
        no = str;
    }
    cout << no << endl;
    return 0;
}