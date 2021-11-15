#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;
void permutation(int boxes[], int n, int curr, int total)
{
    if (curr > total)
    {
        for (int i = 0; i < n; i++)
        {
            cout << boxes[i] << " ";
        }
        cout<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (boxes[i] == 0)
        {
            boxes[i] = curr;
            permutation(boxes, n, curr + 1, total);
            boxes[i] = 0;
        }
    }
}

int main()
{

    int n, r;
    cin >> n >> r;
    int boxes[n] = {0};

    permutation(boxes, n, 1, r);

    return 0;
}