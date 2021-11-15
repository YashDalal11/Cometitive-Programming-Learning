#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> fact(int b[])
{
    vector<int> c;
    for (int i = 2; i <= max(b[1], b[0]); i++)
    {
        bool flag = false;
        for (int j = 0; j < 2; j++)
        {
            if (b[j] % i == 0)
            {
                while (b[j] % i == 0)
                {
                    b[j] /= i;
                }
                if (!flag)
                {
                    flag = true;
                    c.push_back(i);
                }
            }
        }
        // cout<<i<<" ";
    }
    // for(int i:c){
    //     cout<<"facts: "<<i<<" ";
    // }
    return c;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[] = {a[0], a[1]};
    vector<int> facts = fact(b);
    long long ans = 1;
    for (int f = 0; f < facts.size(); f++)
    {
        int min = INT_MAX;
        int secmin = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int p = 0;
            while (a[i] % facts.at(f) == 0)
            {
                a[i] /= facts.at(f);
                p++;
            }
            if (p == min)
            {
                secmin = p;
            }
            else if (p > min && p < secmin)
            {
                secmin = p;
            }

            else if (p < secmin)
            {
                secmin = min;
                min = p;
            }
        }
        // cout<<facts.at(f)<<" "<<secmin<<endl;
        ans = ans * pow(facts.at(f), secmin);
    }
    cout << ans << endl;
    return 0;
}