#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertices , edges;
    cin >> vertices >> edges;

    vector<vector<int>> adj[vertices];

    for(int i = 1 ; i <= edges ; i++)
    {
        int v1 , v2 , weight;
        cin >> v1 >> v2 >> weight;

        vector<int> temp1 , temp2;

        temp1.push_back(v2);
        temp1.push_back(weight);
        adj[v1].push_back(temp1);

        temp2.push_back(v1);
        temp2.push_back(weight);
        adj[v2].push_back(temp2);
    }

    cout << endl << endl;

    for(int vertex = 0 ; vertex < vertices ; vertex++)
    {
        cout << vertex << " : " << "{ ";
        for(auto it2 : adj[vertex])
        {
            cout << "( " << it2[0] << " , " << it2[1] << " )" << " ";
            cout << " ";
        }
        cout << "}" << endl << endl;
    }

    cout << endl;

    return 0;
}