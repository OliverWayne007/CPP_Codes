#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Cycle Detection using BFS.

bool bfs(vector<ll> adj[] , vector<bool>& vis , vector<ll>& par , ll source)
{
    queue<ll> q;
    q.push(source);
    vis[source] = true;
    while(q.empty() == false)
    {
        ll node = q.front();
        q.pop();
        for(auto neighbour : adj[node])
        {
            if(vis[neighbour] == false)
            {
                vis[neighbour] = true;
                par[neighbour] = node;
                q.push(neighbour);
            }
            else
            {
                if(neighbour == par[node])
                {
                    continue;
                }
                else
                {
                    cout << "Cycle Detected at vertex " << neighbour << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

void Solution(ll T)
{
    ll vertices , edges;
    cin >> vertices >> edges;
    vector<ll> adj[vertices + 1];
    for(ll i = 1 ; i <= edges ; i++)
    {
        ll v1 , v2;
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    vector<bool> visited(vertices + 1 , false);
    vector<ll> parent(vertices + 1 , -1);
    for(ll vertex = 1 ; vertex <= vertices ; vertex++)
    {
        if(visited[vertex] == false)
        {
            bool found = bfs(adj , visited , parent , vertex);
            if(found == true)
            {
                cout << "Cycle Detected !!!" << endl;
                return;
            }
        }
    }
    cout << "No Cycle Detected !!!" << endl;
    return;
}

int main()
{
   flash();
   ll tc = 1;
   //cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}