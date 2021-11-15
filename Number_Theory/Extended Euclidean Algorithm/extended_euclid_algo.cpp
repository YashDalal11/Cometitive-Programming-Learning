#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7

struct triplet{
    int x,y,g;
};

triplet extend_euclid(int a,int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.y=0;
        ans.g=a;
        return ans;
    }

    triplet small_ans = extend_euclid(b,a%b);
    triplet ans;
    ans.x=small_ans.y;
    ans.y= small_ans.x - (a/b)*small_ans.y;
    ans.g=small_ans.g;
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    triplet ans = extend_euclid(a,b);
    cout<<"x: "<<ans.x<<" y: "<<ans.y<<" gcd: "<<ans.g;
    return 0;
}