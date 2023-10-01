#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;      // Number of vertices.
    cout << "Enter the number of vertices: ";
    cin >> n;
    vector<vector<ll>> v(n);
    ll m;       // Number of edges.
    cout << "Enter the number of edges: ";
    cin >> m;
    for(ll i = 1 ; i <= m ; i++)
    {
        ll v1 , v2;
        cin >> v1 >> v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
    ll idx = 0;
    for(auto it : v)
    {
        cout << idx << " - " ;
        for(auto itr : it)
        {
            cout << itr << " ";
        }
        cout << endl;
        idx++;
    }
    return 0;
}