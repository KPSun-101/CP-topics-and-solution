//__sun__

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<bool>Prime(n+1,true);
    Prime[0]=Prime[1]=false;
    vector<int>V;
    for(i=2;i<=sqrt(n);i++)
    {
        if(Prime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                Prime[j]=false;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        if(Prime[i])
        {
            V.push_back(i);
        }
    }
    int doun=0;
    for(int j=2;j<=n;j++)
    {
        int coun=0;
    for(int k=0;k<V.size();k++)
    {
        if(j%V[k]==0)
        {
            coun++;
        }

    }
    if(coun==2)
    {
        doun++;
    }
    }
    cout<<doun<<endl;

}
