#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && !s.count(i))
            {
                s.insert(i);
                n /= i;
                break;
            }
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && !s.count(i))
            {
                s.insert(i);
                n /= i;
                break;
            }
        }
        if (s.size() < 2 || s.count(n) || n == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "Yes" << endl;
            s.insert(n);
            for (auto i : s)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}