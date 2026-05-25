#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,t,sum=0,coun=0;
    cin>>n>>t;
    vector<long long>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int left=0,right=0;
    while(right<n)
    {
        sum=sum+a[right];
        while(sum>t)
        {
            sum=sum-a[left];
            left++;
        }
        coun=max(coun,right-left+1);
        right++;
    }
    cout<<coun<<endl;
    return 0;
}
