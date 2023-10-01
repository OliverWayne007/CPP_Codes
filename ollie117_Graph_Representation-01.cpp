#include<bits/stdc++.h>
using namespace std;
// Representing a given non-weighted Undirected graph using Adjacency Matrix.
int main()
{
    int n = 6;  // The total number of vertices.
    cout << "The number of vertices is: "<< n << endl; 

    vector<pair<int , int>> input = {{0,1},{0,2},{0,4},{1,2},{1,3},{2,4},{2,5},{3,5},{4,5}};     // Given undirected graph.

    vector<vector<int>> adm(n , vector<int> (n , 0));  // Creating an Adjacency Matrix and initializing it with 0.

    for(int i = 0 ; i < input.size() ; i++)
    {
        adm[input[i].first][input[i].second] = 1;
        adm[input[i].second][input[i].first] = 1;
    }

    return 0;
}