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
        vector<ll>V1(n),V2(n),prefix(n),V3(n);
        for(int i=0;i<n;i++)
        {
            cin>>V1[i];
        }
        V3=V1;
        sort(V3.begin(),V3.end());
        for(int i=0;i<n;i++)
        {
            cin>>V2[i];
        }
        prefix[0]=V2[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+V2[i];
        }
        ll mx=0,maximum=0;
        for(int i=0;i<n;i++)
        {
            if(i>0&&V3[i]==V3[i-1])
            {
                continue;
            }
            ll dific=V3[i];
            int sword=n-i;
            ll lvl=upper_bound(prefix.begin(),prefix.end(),sword)-prefix.begin();
            maximum=max(maximum,dific*lvl);
        }
        cout<<maximum<<nl;
    }
    return 0;
}
