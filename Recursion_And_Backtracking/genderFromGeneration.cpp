#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

int gender(int n, int k)
{
    if (k > (1 << (n - 1)))
    {
        return -1;
    }
    if (n == 1)
    {
        return 1;        
    }

    int lastans = gender(n - 1, (k + 1) / 2);           
    if (lastans == -1)
        return -1;
    int ans = k & 1 ? lastans : !lastans;
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    // cout << "base gender:-";
    string baseGender;
    cin >> baseGender;
    int ans = gender(n, k);
    if (ans == -1)
    {
        cout << "invalid input";
    }
    else
    {
        if (baseGender == "male")
        {
            cout << (ans ? "male" : "female") << endl;           //1=male   0 =female
        }
        else
        {
            cout << (ans ? "female" : "male") << endl;          //1=female  0 = male
        }
    }
    return 0;
}

                         
                //            1
                //        /       \
                //       1          0
                //     /   \      /   \
                //    1     0    0     1
                //   / \   / \  / \   / \
                //  1   0 0  1 0   1  1  0





                    