#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int main()
{
    flash();
    ll n , m , q;
    cin >> n >> m >> q;
    vector<ll> adj[n+1];
    vector<pair<ll , ll>> frozen(n+1 , {0 , 0});
    for(ll i = 1 ; i <= m ; i++)
    {
        ll u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(ll j = 1 ; j <= q ; j++)
    {
        ll t , x;
        cin >> t >> x;
        if(t == 1)
        {
            if(frozen[x].first == 0)
            {
                frozen[x].first = 1;
                frozen[x].second = 1;
            }
        }
        else if(t == 3)
        {
            if(frozen[x].first == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            for(ll i = 1 ; i <= x ; i++)
            {
                for(ll k = 1 ; k <= n ; k++)
                {
                    if(frozen[x].first == 0 || frozen[x].second == 0)
                    {
                        continue;
                    }
                    else
                    {
                        for(auto it : adj[x])
                        {
                            frozen[it].first = 1;
                            frozen[it].second = 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}