#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

void towerOfHonoi(int n, char source, char destination, char helper)
{
    if (n == 1)
    {
        cout << "move 1st disk from " << source << " to " << destination << endl;
        return;
    }
    towerOfHonoi(n - 1, source, helper, destination);
    cout << "move " << n << "th disk from " << source << " to " << destination << endl;
    towerOfHonoi(n - 1, helper, destination, source);
}

int main()
{
    // char a, b, c;
    int n;
    cin >> n;
    towerOfHonoi(n, 'a', 'c', 'b');
    return 0;
}