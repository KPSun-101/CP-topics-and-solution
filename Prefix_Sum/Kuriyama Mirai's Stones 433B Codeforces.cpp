//__sun__

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
        ll n;
        cin>>n;
        vector<ll>V(n),Prev(n),Prev2(n);
        for(ll i=0;i<n;i++)
        {
            cin>>V[i];
        }
        Prev[0]=V[0];
        for(ll i=1;i<n;i++)
        {
            Prev[i]=Prev[i-1]+V[i];
        }
        sort(V.begin(),V.end());
        Prev2[0]=V[0];
        for(ll i=1;i<n;i++)
        {
            Prev2[i]=Prev2[i-1]+V[i];
        }
        ll t;
        cin>>t;
        while(t--)
        {
            ll m,a,b;
            cin>>m>>a>>b;
            if(m==1)
            {
                if(a==1)
                {
                    cout<<Prev[b-1]<<endl;
                }
                else
                {
                cout<<Prev[b-1]-Prev[a-2]<<endl;
                }
            }
            else if(m==2)
            {
                if(a==1)
                {
                    cout<<Prev2[b-1]<<endl;
                }
                else
                {
                cout<<Prev2[b-1]-Prev2[a-2]<<endl;
                }
            }
        }

       return 0;
}
