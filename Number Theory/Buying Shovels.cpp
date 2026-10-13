#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long X=n;
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
            long long x1=i;
            long long x2=n/i;
            if(x1<=k)
            {
                X=min(X,n/x1);
            }
            if(x2<=k)
            {
                X=min(X,n/x2);
            }
        }
        }
        if(k>=n)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<X<<endl;
        }
    }
    return 0;
}
