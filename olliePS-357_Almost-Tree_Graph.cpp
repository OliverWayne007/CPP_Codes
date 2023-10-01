#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
{
   ll vertices;
   cin >> vertices;
   vector<ll> adj[vertices];
   for(ll i = 1 ; i <= vertices ; i++)
   {
      ll v1 , v2;
      cin >> v1 >> v2;
      adj[v1].push_back(v2);
      adj[v2].push_back(v1);
   }
   vector<bool> visited(vertices , false);
   vector<ll> dist(vertices , 0);
   ll dis = -1 , cycle_len;
   bool found = false;
   queue<pair<ll , ll>> q;
   q.push({0 , -1});
   while(q.empty() != true)
   {
      ll sz = q.size();
      dis++;
      while(sz > 0)
      {
         pair<ll , ll> p = q.front();
         ll parent = p.second , node = p.first;
         visited[node] = true;
         dist[node] += dis;
         q.pop();
         for(auto child : adj[node])
         {
            if(child == parent)
            {
               continue;
            }
            if(visited[child] == false)
            {
               q.push({child , node});
            }
            if(visited[child] == true)
            {
               found = true;
               cycle_len = dist[child] + dist[node] + 1;
               break;
            }
         }
         if(found == true)
         {
            break;
         }
         sz--;
      }
      if(found == true)
      {
         break;
      }
   }
   cout << cycle_len << endl;
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
      solution(t);
      t++;        
   }
   return 0;
}