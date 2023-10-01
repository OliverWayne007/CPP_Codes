#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// Representing a given Undirected weighted graph using Adjacency Matrix.

const int N = 1e3;
int adm[N][N];      // SINCE IT IS DECLARED GLOBALLY , IT IS AUTOMATICALLY INITIALIZED WITH 0.
int m;

int main()
{
    int n , m;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int v1 , v2 , w;
        cin >> v1 >> v2 >> w;
        adm[v1][v2] = w;
        adm[v2][v1] = w;
    }
    return 0;
}