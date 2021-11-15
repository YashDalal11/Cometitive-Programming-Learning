#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int stois(char *s, int n)
{
    if (n == 0)
    {
        return s[n]-48;
    }
    int lastans = stois(s, n - 1);
    int digit = s[n]-48;
    // cout<<"lastans "<<lastans<<" digit "<<digit<<endl;
    return (lastans*10)+digit;
}

int main()
{
    char s[4];
    cin >> s;

    cout << stois(s, strlen(s)-1) << endl;
    return 0;
}