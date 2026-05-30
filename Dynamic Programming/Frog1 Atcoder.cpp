//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
const int N=1e5+10;
int a[N];
int dp[N];

int Frog(int i)
{
    if(i==0)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int cost=INT_MAX;
    cost=min(cost,Frog(i-1)+abs(a[i]-a[i-1]));
    if(i>1)
    {
        cost=min(cost,Frog(i-2)+abs(a[i]-a[i-2]));
    }
    return dp[i]=cost;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    faster
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<Frog(n-1)<<nl;
    return 0;
}
