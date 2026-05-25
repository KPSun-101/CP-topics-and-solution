//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    faster
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,sum=0;
        cin>>n>>k;
        vector<ll>V(n),prefix(n);
        for(ll i=0;i<n;i++)
        {
            cin>>V[i];
            sum+=V[i];
        }
        prefix[0]=V[0];
        for(ll i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+V[i];
        }
        while(k--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            if(a==1)
            {
                if((sum-prefix[b-1]+c*(b-a+1))%2!=0)
                {
                    cout<<"YES"<<nl;
                }
                else
                {
                    cout<<"NO"<<nl;
                }
            }
            else if((sum-(prefix[b-1]-prefix[a-2])+c*(b-a+1))%2!=0)
            {
                cout<<"YES"<<nl;
            }
            else
            {
                cout<<"NO"<<nl;
            }
        }
    }
    return 0;
}
