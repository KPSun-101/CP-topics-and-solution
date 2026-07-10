//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
int main()
{
    faster
    int n,p;
    cin>>n>>p;
    vector<ll>V(n),Prefix(n);
    for(int i=0;i<n;i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end(),greater<ll>());
    Prefix[0]=V[0];
    for(int i=1;i<n;i++)
    {
        Prefix[i]=Prefix[i-1]+V[i];
    }
    while(p--)
    {
        int x,y;
        cin>>x>>y;
        int z=x-y;
        if(x==y)
        {
            cout<<Prefix[x-1]<<nl;
        }
        else
        {
            cout<<Prefix[x-1]-Prefix[z-1]<<nl;
        }
    }
    return 0;
}
