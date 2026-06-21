#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x1,y1,x2,y2,x,y;
        cin>>x1>>y1>>x2>>y2>>x>>y;
        long long int cross_product=(x2-x1)*(y-y1)-(y2-y1)*(x-x1);
        if(cross_product>0)
        {
            cout<<"LEFT"<<endl;
        }
        else if(cross_product<0)
        {
            cout<<"RIGHT"<<endl;
        }
        else
        {
            cout<<"TOUCH"<<endl;
        }
    }
    return 0;
}
