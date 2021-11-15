#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        if (n > m)
        {
            int temp = m;
            m = n;
            n = temp;
        }
        int diff = m - n;

        long int case1 = (n + m - 2) * x;
        long int case2 = ((n - 1) * y) + (diff * x);
        long int case3 = ((n - 1) * y) + ((diff / 2) * 2 * y) + (diff % 2) * x;

        long int ans = min(min(case1, case2), case3);
        cout << ans << endl;
    }
    return 0;
}