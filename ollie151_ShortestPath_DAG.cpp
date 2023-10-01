#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void FindShortestPath(vector< pair<int , int> > adj[] , int src , int curr , vector<ll>& shortestDistance , vector<int>& parent)
{
    for(auto node : adj[curr])
    {
        if(adj[curr].size() == 0)
        {
            continue;
        }
        int child = node.first;
        int dist_of_curr_from_src = shortestDistance[curr];
        int dist_of_child_from_curr = node.second;
        int dist_of_child_from_src = dist_of_curr_from_src + dist_of_child_from_curr;
        if(dist_of_child_from_src < shortestDistance[child])
        {
            shortestDistance[child] = dist_of_child_from_src;
            parent[child] = curr;
            FindShortestPath(adj , src , child , shortestDistance , parent);
        }
    }
    return;
}

void TraceShortestPath(int src , int vertex , vector<int>& parent)
{
    vector<int> path;
    path.push_back(vertex);
    while(vertex != src)
    {
        path.push_back(parent[vertex]);
        vertex = parent[vertex];
    }
    reverse(path.begin() , path.end());
    for(auto node : path)
    {
        cout << node << " ";
    }
    cout << endl;
    return;
}

void Solution(ll T)
{
    cout << endl;
    int v , e , src;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << endl;
    cout << "Enter the source vertex: ";
    cin >> src;
    cout << endl;
    vector< pair<int , int> > adj[v];
    cout << "Enter the number of edges: ";
    cin >> e;
    cout << endl;
    cout << "Enter the edges and its weights:" << endl;
    for(int i = 1 ; i <= e ; i++)
    {
        int v1 , v2 , w;
        cin >> v1 >> v2 >> w;
        adj[v1].push_back({v2 , w});
    }
    cout << endl;
    vector<int> parent(v , -1);
    vector<ll> shortestDistance(v , INF);
    shortestDistance[0] = 0;
    FindShortestPath(adj , src , 0 , shortestDistance , parent);
    for(int vertex = 0 ; vertex < v ; vertex++)
    {
        cout << "The shortest distance from " << src << " to " << vertex << " is: " << shortestDistance[vertex] << endl;
        cout << "The shortest path from " << src << " to " << vertex << " is: " << endl;
        TraceShortestPath(src , vertex , parent);
        cout << endl;
    }
    return;
}

int main()
{
   //flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}