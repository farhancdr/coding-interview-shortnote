#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e5+123;
bool vis[mx];
vector<int> adj[mx];

void bfs(int b){
    queue<int> q;
    q.push(b);
    vis[b] = true;
    while(!q.empty()){
        int u = q.front();
        cout << u << " ";
        q.pop();
        for(auto v: adj[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    for ( int i = 1; i <= m; i++ ) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back ( v );
        adj[v].push_back ( u );
    }
    bfs ( 1 );

    return 0;
}