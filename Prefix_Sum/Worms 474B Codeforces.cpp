//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl endl
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    faster
    ll n;
    cin>>n;
    vector<ll>V(n),pre(n);
    for(int i=0;i<n;i++)
    {
        cin>>V[i];
    }
    pre[0]=V[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+V[i];
    }
    ll m;
    cin>>m;
    vector<ll>V2(m);
    for(int i=0;i<m;i++)
    {
        cin>>V2[i];
    }
    for(int i=0;i<m;i++)
    {
        int pos=lower_bound(pre.begin(),pre.end(),V2[i])-pre.begin();
        cout<<pos+1<<nl;
    }
    return 0;
}
