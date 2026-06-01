//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int a,b,c;
int dp[4010];
int Cut(int n)
{
    if(n==0)
    {
        return 0;
    }
     if(n<0)
    {
        return -1e9;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    else{
    return dp[n]=max({1+Cut(n-a),1+Cut(n-b),1+Cut(n-c)});
    }
}
int main()
{
    faster
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>a>>b>>c;
    cout<<Cut(n)<<nl;
    return 0;

}
