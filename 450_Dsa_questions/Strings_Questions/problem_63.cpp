#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;
bool palindrome(string s)
{
    for (int i = 0; i <= s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}
string longestPalin(string s)
{
    // code here
    string ans = "";
    int max = ans.size();
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j < s.size() - i + 1; j++)
        {
            string str = s.substr(i, j);
            if (palindrome(str) && str.length() > max)
            {
                ans = str;
                max = str.length();
            }
        }
    }
    return ans;
}
int main()
{
    string str;
    cin >> str;
    cout << longestPalin(str) << endl;
    return 0;
}