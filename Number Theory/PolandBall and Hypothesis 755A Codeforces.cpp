//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
bool prime(int P)
{
    if(P<=2)
    {
        return true;
    }
    for(int i=2;i*i<=P;i++)
    {
        if(P%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    faster
    int n,x=0;
    cin>>n;
    for(int j=1;j<=10;j++)
    {
        x=(n*j)+1;
        if(!prime(x))
        {
            cout<<j<<nl;
            break;
        }
    }

    return 0;
}
