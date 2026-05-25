//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
int main()
{
    faster
    string s;
    cin>>s;
    stack<char>S;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if(!S.empty()&&S.top()=='('&&c==')')
        {
            S.pop();
        }
        else
        {
            S.push(c);
        }
    }
    cout<<s.size()-S.size()<<nl;
    return 0;
}
