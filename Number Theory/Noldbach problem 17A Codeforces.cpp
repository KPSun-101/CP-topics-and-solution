//__sun__

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<bool>nold(n+1,true);
    nold[0]=nold[1]=false;
    vector<int>V;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(nold[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                nold[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(nold[i])
        {
            V.push_back(i);
        }
    }
    int sum,coun=0;
    for(int j=0;j<=V.size();j++)
    {
        sum=V[j]+V[j+1]+1;
        if(sum<=n&&nold[sum])
        {
            coun++;
        }
    }
    if(coun>=k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
