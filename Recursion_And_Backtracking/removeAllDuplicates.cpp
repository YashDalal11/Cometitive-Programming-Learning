#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

string removeDuplicates(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    string lastans = removeDuplicates(s.substr(1));
    if (lastans[0] == s[0])
    {
        return lastans;
    }
    return s[0] + lastans;
}

int main()
{

    string s = "aaaabbbeeecddddd";
    cout << removeDuplicates(s) << endl;
    return 0;
}