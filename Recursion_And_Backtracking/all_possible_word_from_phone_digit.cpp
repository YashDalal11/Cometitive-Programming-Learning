#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

string keypad[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void word_from_digit(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keypad[s[0]-'0'];
    for(int i=0;i<code.length();i++){
        word_from_digit(s.substr(1),ans+code[i]);
    }
}

int main()
{
    string s = "23";
    word_from_digit(s,"");

    return 0;
}