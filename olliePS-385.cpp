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
   ll n;
   cin >> n;
   vector<ll> v;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
   }
   ll ans = 0;
   set<ll> st1;
   map<ll , ll> mp;
   for(ll i = 0 ; i < n ; i++)
   {
      if(!st1.count(v[i]))
      {
         st1.insert(v[i]);
      }
      else
      {
         mp[v[i]]++;
      }
   }
   if(!mp.size())
   {
      cout << ans << endl;
      return;
   }
   for(auto it : mp)
   {
      ans = max(ans , it.second);
   }
   cout << ans << endl;
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