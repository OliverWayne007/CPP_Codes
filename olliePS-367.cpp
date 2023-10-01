#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    int vertices;
    cin >> vertices;
    int edges = vertices - 1;

    vector<int> adj[vertices];
    for (int i = 0; i < edges; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    vector<int> distance(vertices, 0);
    vector<bool> visited(vertices, false);
    visited[0] = true;
    queue<int> q;
    q.push(0);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto node : adj[curr])
        {
            if (!visited[node])
            {
                distance[node] = 1 + distance[curr];
                q.push(node);
                visited[node] = true;
            }
        }
    }

    int odds = 0;
    for (auto dist : distance)
    {
        if (dist % 2 == 1)
        {
            odds++;
        }
    }

    cout << odds << endl;
}

int main()
{
    flash();
    ll tc;
    cin >> tc;
    ll t = 1;
    while (t <= tc)
    {
        Solution(t);
        t++;
    }
    return 0;
}