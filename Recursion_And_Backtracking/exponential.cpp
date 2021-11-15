#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int exponential(int n, int k)
{
    if (k == 1)
    {
        return n;
    }
    return n * exponential(n, k - 1);
}

int main()      
{

    int n, k;
    cin >> n >> k;
    cout << exponential(n, k) << endl; // n^k
    return 0;
}