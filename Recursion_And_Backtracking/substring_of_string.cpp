#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

void substring_of_string(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    substring_of_string(s.substr(1), ans);
    substring_of_string(s.substr(1), ans + s[0]);
}

int main()
{
    string s = "ABC";
    substring_of_string(s, "");
    return 0;
}