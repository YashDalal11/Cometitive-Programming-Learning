#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

void substring_with_ascii_value(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    substring_with_ascii_value(s.substr(1), ans);
    substring_with_ascii_value(s.substr(1), s[0] + ans);
    substring_with_ascii_value(s.substr(1), to_string((int)s[0]) + ans);
}
int main()
{
    string s = "AB";
    substring_with_ascii_value(s, "");
    return 0;
}