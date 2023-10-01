#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ull unsigned long long
#define pll pair<long long , long long>

#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

ll BFS(ll x , ll y , map<ll , ll>& mp)
{
    vector<bool> visited(1e4 , false);
    mp[x] = -1;
    queue<pll> q;
    q.push({x , 0});
    visited[x] = true;
    while(!q.empty())
    {
        ll n = q.size();
        pll node = q.front();
        q.pop();
        while(n != 0)
        {
            ll parent = node.first;
            ll lvl = node.second;
            if(parent == y)
            {
                return lvl;
            }
            ll child1 = parent + 1;
            ll child2 = parent - 1;
            ll child3 = parent + 10;
            ll child4 = parent - 10;
            ll child5 = parent/10 + (parent % 10) * 1000;
            if(child1 >= 1000 && child1 < 1e4 && visited[child1] == false)
            {
                q.push({child1 , lvl + 1});
                visited[child1] = true;
                mp[child1] = parent;
            }
            if(child2 >= 1000 && child2 < 1e4 && visited[child2] == false)
            {
                q.push({child2 , lvl + 1});
                visited[child2] = true;
                mp[child2] = parent;
            }
            if(child3 >= 1000 && child3 < 1e4 && visited[child3] == false)
            {
                q.push({child3 , lvl + 1});
                visited[child3] = true;
                mp[child3] = parent;
            }
            if(child4 >= 1000 && child4 < 1e4 && visited[child4] == false)
            {
                q.push({child4 , lvl + 1});
                visited[child4] = true;
                mp[child4] = parent;
            }
            if(child5 >= 1000 && child5 < 1e4 && visited[child5] == false)
            {
                q.push({child5 , lvl + 1});
                visited[child5] = true;
                mp[child5] = parent;
            }
            n--;
        }
    }
}

void Solution(ll T)
{
    ll x , y;
    cin >> x >> y;
    vector<ll> path;
    map<ll , ll> mp;
    ll min_steps = BFS(x , y , mp);
    ll num = y;
    path.push_back(num);
    while(mp[num] != -1)
    {
        path.push_back(mp[num]);
        num = mp[num];
    }
    reverse(path.begin() , path.end());
    cout << "Minimun steps required: " << min_steps << endl;
    cout << "Path: " << endl;
    for(auto it : path)
    {
        cout << it << endl;
    }
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