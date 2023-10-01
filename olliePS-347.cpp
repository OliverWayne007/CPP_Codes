#include <bits/stdc++.h>

using namespace std;

#define ll long long

void king(ll vertex , vector<ll> graph[] , ll count , set<ll>& st)
{
    if (count == 2)
    {
        return;
    }

    for (ll node : graph[vertex])
    {
        st.insert(node);
        king(node , graph , count + 1 , st);
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll vertices;
        cin >> vertices;

        vector<ll> G[vertices + 1];

        ll edges = (vertices * (vertices - 1)) / 2;

        for (ll i = 0; i < edges; i++)
        {
            ll v1, v2;
            cin >> v1 >> v2;
            G[v1].push_back(v2);
        }

        for (ll j = 1; j <= vertices; j++)
        {
            set<ll> st;
            king(j , G , 0 , st);
            if(st.size() == vertices - 1)
            {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    return 0;
}