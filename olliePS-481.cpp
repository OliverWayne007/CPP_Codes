#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll vertices , edges;
    cin >> vertices >> edges;
    vector<ll> adj[vertices + 1];
    for(int i = 1 ; i <= edges ; i++)
    {
        ll v1 , v2;
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    map<ll , ll> mp;
    for(ll i = 1 ; i <= vertices ; i++)
    {
        mp[adj[i].size()]++;
    }
    ll mul_y = mp[1] , x;
    if(mp.size() == 2)
    {
        for(auto it : mp)
        {
            if(it.first == 1)
            {
                continue;
            }
            x = it.second - 1;
        }
    }
    else
    {
        for(auto it : mp)
        {
            if(it.first == 1 || it.second == 1)
            {
                continue;
            }
            x = it.second;
        }
    }
    ll y = mul_y/x ;
    cout << x << " " << y << endl;
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