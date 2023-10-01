#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void dfs(vector<int> adj[] , vector<int>& visited , vector<int>& component , int vertex)
{
   visited[vertex] = 1;
   component.push_back(vertex);
   for(auto node : adj[vertex])
   {
      if(visited[node] == 0)
      {
         dfs(adj , visited , component , node);
      }
   }
}

void solution()
{
   // All right let's some graph as input !!!
   int v;
   cout << "Enter the number of vertices: ";
   cin >> v;
   int e;
   cout << "Enter the number of edges: ";
   cin >> e;
   vector<int> adj[v];
   cout << "Enter the edges of the graph: " << endl;
   for(int i = 1 ; i <= e ; i++)
   {
      int v1 , v2;
      cin >> v1 >> v2;
      adj[v1].push_back(v2);
      adj[v2].push_back(v1);
   }
   // So the now the adjacency list of the given graph is ready !!!
   // So now we are ready to find the number of connected components in the given graph !!!
   vector<int> visited(v , 0);   // We create a visited vector and initialize it with zero.
   // Now we traverse through the entire visited array once and whenever we come across an unvisited vertex we mark it as visited
   // and then go to it's child nodes.
   vector<vector<int>> components;
   for(int vertex = 0 ; vertex < v ; vertex++)
   {
      if(visited[vertex] == 1)
      {
         continue;
      }
      else
      {
         vector<int> component;
         dfs(adj , visited , component , vertex);
         components.push_back(component);
      }
   }
   // NOTE: THE TOTAL NUMBER OF TIMES THE dfs FUNCTION IS CALLED IS ACTUALLY EQUAL TO THE NUMBER OF COMPONENTS IN THE GRAPH.
   // THIS IS BECAUSE IN EACH dfs, WE GET ALL THE NODES BELONGING TO A PARTICULAR COMPONENT.
   cout << "The total number of connected components in the given graph is: " << components.size() << endl;
   cout << "Following are the connected components: " << endl;
   for(auto comps : components)
   {
      for(auto node : comps)
      {
         cout << node << " ";
      }
      cout << endl;
   }
   return;
}

int main()
{
   //flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}