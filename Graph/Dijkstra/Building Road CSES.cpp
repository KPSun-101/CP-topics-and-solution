#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100005];
vector<bool>Visit(100005);
void dfs(int x)
{
    Visit[x]=true;
    for(int i=0;i<adj[x].size();i++)
    {
        int v=adj[x][i];
        if(!Visit[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count=0;
    vector<int>Vec;
    for(int i=1;i<=n;i++)
    {
        if(Visit[i]==false)
        {
            Vec.push_back(i);
            count++;
            dfs(i);
        }
    }
    cout<<count-1<<endl;
    if(Vec.size()>1)
    {
    for(int i=0;i<Vec.size()-1;i++)
    {
        cout<<Vec[i]<<" "<<Vec[i+1]<<endl;;
    }
}
    return 0;
}
