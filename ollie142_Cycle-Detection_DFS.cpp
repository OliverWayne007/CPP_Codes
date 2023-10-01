#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Cycle Detection in an undirected graph using DFS

bool dfs(vector<ll> adj[] , vector<bool>& vis , vector<ll>& par , ll source)
{
   vis[source] = true;
   cout << source << " ";
   bool found = false;
   for(auto node : adj[source])
   {
      if(vis[node] == false)
      {
         par[node] = source;
         bool check = dfs(adj , vis , par , node);
         found = (found || check);
         // bool found = dfs(adj , vis , par , node);
         // if(found == true)
         // {
         //    return true;
         // }
      }
      else
      {
         if(node == par[source])
         {
            continue;
         }
         else
         {
            return true;
         }
      }
   }
   return found;
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
   vector<ll> parent(vertices + 1 , -1);
   vector<bool> visited(vertices + 1 , false);
   bool found = false;
   for(ll vertex = 1 ; vertex <= vertices ; vertex++)
   {
      if(visited[vertex] == false)
      {
         bool check = dfs(adj , visited , parent , vertex);
         found = (found || check);
         // found = dfs(adj , visited , parent , vertex);
         // if(found == true)
         // {
         //    break;
         // }
      }
   }
   cout << endl;
   if(found == true)
   {
      cout << "Cycle Found !!!" << endl;
      return;
   }
   cout << "No Cycle Found !!!" << endl;
   return;
}

int main()
{
   flash();
   ll tc = 1;
   // cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}