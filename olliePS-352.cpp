#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

ll dfs(vector<ll> adj[] , vector<bool>& vis , ll src)
{
    vis[src] = true;
    if(adj[src].size() == 0)
    {
        return 1;
    }
    ll max_depth = 0;
    for(auto node : adj[src])
    {
        ll depth = 1 + dfs(adj , vis , node);
        max_depth = max(max_depth , depth);
    }
    return max_depth;
}

void solution(ll T)
{
    ll n;
    cin >> n;
    vector<ll> adj[n + 1];
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        if(x != -1)
        {
            adj[x].push_back(i);
        }
    }
    vector<bool> visited(n + 1 , false);
    ll max_depth = -1;
    for(ll src = 1 ; src <= n ; src++)
    {
        if(visited[src] == false)
        {
            ll depth = dfs(adj , visited , src);
            max_depth = max(max_depth , depth);
        }
    }
    cout << max_depth << endl;
    return;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      solution(t);
      t++;        
   }
   return 0;
}