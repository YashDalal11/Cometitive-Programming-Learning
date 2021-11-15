#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

int knapsack(int val[],int wt[],int n,int W){

    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(val,wt,n-1,W);
    }

    return max(knapsack(val,wt,n-1,W-wt[n-1])+val[n-1],knapsack(val,wt,n-1,W));
}

int main()
{
    int wt[]={10,20,30};
    int val[]={100,50,150};
    int W=50;
    cout<<knapsack(val,wt,3,W);
    return 0;
}