#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Orient(ll x1,ll y1,ll x2,ll y2,ll x,ll y)
{
    return (x2-x1)*(y-y1)-(y2-y1)*(x-x1);
}
bool Check(ll x1,ll y1,ll x2,ll y2,ll x,ll y)
{
    return (min(x1,x2)<=x && max(x1,x2)>=x && min(y1,y2)<=y && max(y1,y2)>=y);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        ll O1=Orient(x1,y1,x2,y2,x3,y3);
        ll O2=Orient(x1,y1,x2,y2,x4,y4);
        ll O3=Orient(x3,y3,x4,y4,x1,y1);
        ll O4=Orient(x3,y3,x4,y4,x2,y2);
        if(((O1>0&&O2<0)||(O1<0&&O2>0))&&((O3>0&&O4<0)||(O3<0&&O4>0)))
        {
            cout<<"YES"<<endl;
        }
        else if(O1==0&&Check(x1,y1,x2,y2,x3,y3)||O2==0&&Check(x1,y1,x2,y2,x4,y4)
             ||O3==0&&Check(x3,y3,x4,y4,x1,y1)||O4==0&&Check(x3,y3,x4,y4,x2,y2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
