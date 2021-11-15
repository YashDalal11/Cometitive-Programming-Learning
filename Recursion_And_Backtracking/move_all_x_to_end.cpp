#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

string moveXtoEnd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string lastans = moveXtoEnd(s.substr(1));
    if (ch == 'x' || ch == 'X')
    {
        return lastans + ch;
    }
    return ch + lastans;
}

int main()
{
    string s = "xaxxbXdxcefxhix";
    cout << moveXtoEnd(s);
    return 0;
}