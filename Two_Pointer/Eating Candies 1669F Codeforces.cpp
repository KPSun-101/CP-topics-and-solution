//__sun__
#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define ll long long
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>V(n);
        ll sum1=0,sum2=0;
        ll bob=0,alice=n-1,ma_x=0;
        for(int i=0;i<n;i++)
        {
            cin>>V[i];
        }
        while(bob<=alice)
        {
             if(sum1<=sum2)
            {
                sum1+=V[bob];
                bob++;
            }
            else if(sum1>sum2)
            {
                sum2+=V[alice];
                alice--;
            }
            if(sum1==sum2)
            {
                ma_x=(bob)+(n-1-alice);
            }
        }
        cout<<ma_x<<nl;
    }
    return 0;
}
