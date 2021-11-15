// Check if a string is a valid shuffle of two other strings
#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

bool checkShuffle(string s1, string s2, string res)
{
    if (s1.length() + s2.length() != res.length())
    {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(res.begin(), res.end());

    int i = 0, j = 0, k = 0;
    while (k != res.length())
    {
        if (i < s1.length() && s1[i] == res[k])
        {
            i++;
        }
        else if (j < s2.length() && s2[j] == res[k])
        {
            j++;
        }
        else
        {
            return false;
        }

        k++;
    }
    if (i < s1.length() || j < s2.length() || k < res.length())
    {
        return false;
    }
    return true;
}
int main()
{
    string s1, s2, res;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, res);

    if (checkShuffle(s1, s2, res))
    {
        cout << "shuffle\n";
    }
    else
    {
        cout << "not shuffle\n";
    }

    return 0;
}