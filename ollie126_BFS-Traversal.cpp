#include <bits/stdc++.h>
using namespace std;
// BFS Traversal
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(V, 0);
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                q.push(it); 
                vis[it] = 1;
            }
        }
    }
    return bfs;
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector<int> &ans)
{
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
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
    vector<int> ans = bfsOfGraph(vertices, adj);
    cout << "The bfs traversal of the above graph is as follows: " << endl;
    printAns(ans);
    cout << endl;
    return 0;
}