//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
const int N=25e2+10;
int a[N];
int dp[N];

int lis(int i)
{
    int ans=1;
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    for(int j=0;j<i;j++)
    {
        if(a[i]>a[j])
        {
            ans=max(ans,lis(j)+1);
        }
    }
    return dp[i]=ans;
}
int main()
{
    faster
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(i));
    }
    cout<<ans<<nl;
    return 0;
}
