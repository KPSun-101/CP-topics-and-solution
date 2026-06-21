#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,coun=0;
        cin>>n;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
            if(i==n/i)
            {
                coun++;
            }
            else
            {
                coun+=2;
            }
            }
        }
        cout<<coun<<nl;
    }
    return 0;
}
