//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=1<<(31-__builtin_clz(n));
        cout<<p-1<<nl;
    }
    return 0;
}
