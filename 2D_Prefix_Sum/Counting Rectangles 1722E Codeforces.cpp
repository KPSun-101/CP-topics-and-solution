//__sun__
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
long long prefix[N][N];
long long ar[N][N];
#define faster {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define nl endl
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        memset(ar,0,sizeof(ar));
        memset(prefix,0,sizeof(prefix));
    int n,q;
    cin>>n>>q;
    //int ar[1010][1010];
    for(int i=0;i<n;i++)
    {
        int h,w;
        cin>>h>>w;
        ar[h][w]+=h*w;
    }
    
    for(int i=1;i<=1009;i++)
    {
        for(int j=1;j<=1009;j++)
        {
            prefix[i][j]=ar[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
        }
    }
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x1=a+1,y1=b+1,x2=c-1,y2=d-1;
        long long ans = 0;
            if (x1 <= x2 && y1 <= y2) {
                ans = prefix[x2][y2]
                    - prefix[x1 - 1][y2]
                    - prefix[x2][y1 - 1]
                    + prefix[x1 - 1][y1 - 1];
            }
            cout<<ans<<nl;
    }
}
return 0;
}
