//__sun__
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define faster {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
 ll INF=1000000000000000000LL;
int main()
{
    faster
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,ll>>>adj(n+1);
    for(int i=0;i<m;i++)
    {
        int u,v;
        ll w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<ll>dist(n+1,INF);
    vector<ll>parent(n+1,-1);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>>pq;
    dist[1]=0;
    //parent[1]=-1;
    pq.push({0,1});
    while(!pq.empty())
    {
        pair<ll,int>cur=pq.top();
        pq.pop();
        ll d=cur.first;
        int u=cur.second;
        if(d>dist[u])
        {
            continue;
        }
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            ll w=adj[u][i].second;
            if(dist[v]>d+w)
            {
                dist[v]=d+w;
                parent[v]=u;
                pq.push({dist[v],v});
            }
        }
    }
    if(dist[n]==INF)
    {
        cout<<"-1";
        return 0;
    }
    vector<int>path;
    int x=n;
    while(x!=-1)
    {
        path.push_back(x);
        x=parent[x];
    }
    reverse(path.begin(),path.end());
    for(int i=0;i<path.size();i++)
    {
        cout<<path[i]<<" ";
    }
    return 0;
}
