
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<int> St;
        vector<int> V;

        for(int i=1;i<=n;i++)
        {
            V.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                St.push(i+1);
            }
            else if(s[i]=='2')
            {
                if(!St.empty())
                {
                    V[St.top()-1]=0;
                    St.pop();
                }
                else
                {
                    V[i]=0;
                }
            }
            else
            {
                V[i]=0;
            }
        }
        sort(V.begin(),V.end());
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(V[i]!=0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++)
        {
            if(V[i]!=0)
            {
                cout<<V[i]<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
