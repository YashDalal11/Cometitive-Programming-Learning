#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;

stack<char> st;
void insert_At_Bottom(char x)
{
    if (st.size() == 0)
    {
        st.push(x);
        return;
    }
    char a = st.top();
    st.pop();
    insert_At_Bottom(x);
    st.push(a);
}
void reverse()
{
    if (st.size() == 0)
    {
        return;
    }
    char a = st.top();
    st.pop();
    reverse();
    insert_At_Bottom(a);
}
int main()
{
    st.push('y');
    st.push('a');
    st.push('s');
    st.push('h');
    st.push('d');

    // string s;

    // while(!st.empty()){
    //     char a = st.top();
    //     st.pop();
    //     s+=a;
    // }
    // cout<<"Original Stack"<<endl;

    // for(int i=0;i<s.length();i++){
    //     cout<<s[i]<<endl;
    // }
    reverse();

    string rev;

    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        rev += a;
    }
    cout << "Reverse Stack" << endl;

    for (int i = 0; i < rev.length(); i++)
    {
        cout << rev[i] << endl;
    }
    return 0;
}