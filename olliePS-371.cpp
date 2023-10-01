#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

bool dfs(vector<ll> adj[] , vector<ll>& value , ll src , vector<bool>& visited , vector<ll>& color)
{
    visited[src] = true;
    for(auto node : adj[src])
    {
        if(visited[node] == false)
        {
            if(value[node] >= value[src])
            {
                color[node] = color[src];
                bool check = dfs(adj , value , node , visited , color);
                if(check == false)
                {
                    return check;
                }
            }
            else
            {
                color[node] = (color[src] + 1) % 2;
                bool check = dfs(adj , value , node , visited , color);
                if(check == false)
                {
                    return check;
                }
            }
        }
        else
        {
            if(node < src)
            {
                if(value[node] <= value[src])
                {
                    continue;
                }
                else
                {
                    if(color[node] == color[src])
                    {
                        return false;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            else
            {
                if(value[node] < value[src])
                {
                    if(color[node] != color[src])
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    continue;
                }
            }

        }
    }
    return true;
}

void Solution(ll T)
{
    ll n;
    cin >> n;
    vector<ll> value;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        value.push_back(x);
    }

    vector<ll> adj[n];
    for(ll i = 0 ; i < n ; i++)
    {
        for(ll j = 0 ; j < n ; j++)
        {
            if(j != i)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
            else
            {
                continue;
            }
        }
    }

    vector<bool> visited(n , false);
    vector<ll> color(n , -1);

    color[0] = 0;

    bool is_valid = dfs(adj , value , 0 , visited , color);

    if(is_valid == false)
    {
        cout << "No" << endl;
        return;
    }

    for(auto it : color)
    {
        cout << it;
    }

    cout << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}