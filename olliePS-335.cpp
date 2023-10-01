#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

bool dfs(vector<int> adj[] , vector<ll>& vis , int src , int dest , vector<ll>& path)
{
    if(src == dest)
    {
        return true;
    }
    vis[src] = 1;
    for(auto node : adj[src])
    {
        if(vis[node] == 0)
        {
            bool found = dfs(adj , vis , node , dest , path);
            if(found == true)
            {
                path.push_back(node);
                return true;
            }
        }
    }
    return false;
}

void solution()
{
    ll n;
    cin >> n;
    vector<ll> v(n+1 , 0);
    for(ll i = 2 ; i <= n ; i++)
    {
        cin >> v[i];
    }
    vector<int> adj[n+1];
    for(ll i = 2 ; i <= n ; i++)
    {
        adj[i].push_back(v[i]);
        adj[v[i]].push_back(i);
    }
    vector<ll> visited(n + 1 , 0) , path;
    bool found = dfs(adj , visited , 1 , n , path);
    if(found == true)
    {
        path.push_back(1);
        reverse(path.begin() , path.end());
    }
    for(auto it : path)
    {
        cout << it << " ";
    }
    cout << endl;
    return;
}

int main()
{
   flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}