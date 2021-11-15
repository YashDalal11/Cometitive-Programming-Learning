// A Program to check if strings are rotations of each other or not

// Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1?
// (eg given s1 = ABCD and s2 = CDAB, return true, given s1 = ABCD, and s2 = ACBD , return false)
#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

bool strRotation(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    cout << strRotation(s1, s2) << "\n";
    return 0;
}