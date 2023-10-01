#include <bits/stdc++.h>
using namespace std;

void dfs(int node , vector<int> &vis , vector<int> adj[] , vector<int> &storeDfs)
{
    storeDfs.push_back(node); 
    vis[node] = 1; 
    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            dfs(it , vis , adj , storeDfs); 
        }
    }
}

vector<int> dfsOfGraph(int V , vector<int> adj[])
{
    vector<int> storeDfs; 
	vector<int> vis(V , 0); 
    for(int i = 0 ; i < V ; i++)
    {
        if(!vis[i])  dfs(i , vis , adj , storeDfs); 
    }
	return storeDfs; 
}
 
void addEdge(vector<int> adj[] , int u , int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int vertices , edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;
    vector<int> adj[vertices];
    for(int i = 1 ; i <= edges ; i++)
    {
        int v1 , v2;
        cin >> v1 >> v2;
        addEdge(adj , v1 , v2);
    }
    vector<int> df = dfsOfGraph(vertices, adj);
    cout << "DFS Traversal of the above graph is as follows: " << endl;
    for(auto it : df)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}