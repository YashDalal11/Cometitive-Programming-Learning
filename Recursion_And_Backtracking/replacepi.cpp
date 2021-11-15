#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

string replacepi(string str,int index){
    if(str[index+1]=='\0'){
        return str;
    }
    string lastans = replacepi(str,index+1);
    if(lastans[index]=='p' && lastans[index+1]=='i'){
        string ans = lastans.substr(0,index) + "3.14" + lastans.substr(index+2,lastans.size()-index-2);
        return ans;
    }
    return lastans;
}
int main()
{
    string str = "ppppiiiiipipipipipi";
    cout<<replacepi(str,0)<<endl;
    return 0;
}