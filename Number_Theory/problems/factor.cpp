#include <vector>
#include <iostream>
using namespace std;
int main()
{
    const long long limit = 100000001;    // 10^8
    vector<long long> v(limit, 0);
    for (long long i = 2; i < limit; i++)
    {
        if (v.at(i) == 0)
        {
            v.at(i) = i;
            for (long long j = i * i; j < limit; j += i)
            {
                if (v.at(j) == 0)
                {
                    v.at(j) = i;
                }
            }
        }
    }
    // cout << v.size();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v.at(n) << "\n";
    }
    return 0;
}