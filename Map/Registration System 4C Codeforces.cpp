//__sun__
#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define ll long long
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    faster
    int n;
    cin>>n;
    map<string,int>M;
    while(n--)
    {
        string s;
        cin>>s;
        if(M[s]==0)
        {
            cout<<"OK"<<nl;
        }
        else
        {
            cout<<s<<M[s]<<nl;
        }
        M[s]++;
    }
    return 0;
}
