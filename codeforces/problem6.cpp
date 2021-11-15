#include<bits/stdc++.h>
using namespace std;
#define m 1e9+7

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i-1];
        }
        
        deque<int> d;
        d.push_back(a[0]);
        int right=0,left=0;
        for(int i=1;i<n;i++){
            if(d.back()<a[i]){
                d.push_back(a[i]);
            }
            else if(d.front()>a[i]){
                d.push_front(a[i]);
            }
            else if(d.back()>a[i] && d.front()<=a[i]){
                if(left>=right){
                    d.push_back(a[i]);
                    right=(right*2)+1;
                }
                else{
                    d.push_front(a[i]);
                    left = (2*left)+1;
                }
            }
            else if(d.back()==a[i]){
                if(left>=right){
                    d.push_back(a[i]);
                    right = (2*right);
                }
                else if(d.front()<a[i]){
                    d.push_front(a[i]);
                    left = (2*left)+1;
                }
                else{
                    d.push_front(a[i]);
                    left= 2*left;
                }
            }
            else if(d.front()==a[i]){
                if(left<=right){
                    d.push_front(a[i]);
                    left = (2*left);
                }
                else if(d.back()>a[i]){
                    d.push_back(a[i]);
                    right = (2*right)+1;
                }
                else{
                    d.push_back(a[i]);
                    right= 2*right;
                }
            }
        }
        // int cnt=0;
        cout<<d.at(0)<<" ";
        for(int i=1;i<n;i++){
            cout<<d.at(i)<<" ";
            // if(d.at(i-1)>d.at(i)){
            //     cnt++;
            // }
        }
        // cout<<"left: "<<left<<"\n";
        // cout<<"right: "<<right<<"\n";
        cout<<(right+left)<<"\n";
    }
    return 0;
}