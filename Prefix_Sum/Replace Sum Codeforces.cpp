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
        int n,q;
        cin>>n>>q;
        vector<ll>A(n),B(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>B[i];
        }
        vector<ll>best(n);
        best[n-1]=max(A[n-1],B[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            best[i]=max({A[i],B[i],best[i+1]});
        }
        vector<ll>prefix(n);
        prefix[0]=best[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+best[i];
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            if(l==1)
            {
                cout<<prefix[r-1]<<" ";
            }
            else if(l==r)
            {
                cout<<prefix[l-1]-prefix[l-2]<<" ";
            }
            else
            {
                cout<<prefix[r-1]-prefix[l-2]<<" ";
            }
        }
        cout<<nl;
    }
    return 0;
}
