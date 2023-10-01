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
   ll front = 0 , back = n - 1;
   ll ans = 0;
   while(front <= back)
   {
      if(front == back)
      {
         back--;
         ans++;
         continue;
      }
      if(v[front] == v[back] && front != back)
      {
         back--;
         continue;
      }
      if(v[front] == v[back - 1] && v[front + 1] != v[back])
      {
         front++;
         ans++;
         continue;
      }
      if(v[front] != v[back - 1] && v[front + 1] == v[back])
      {
         back--;
         ans++;
         continue;
      }
      if(v[front] != v[back - 1] && v[front + 1] != v[back])
      {
         back--;
         ans++;
         continue;
      }
      if(v[front] == v[back - 1] && v[front + 1] == v[back])
      {
         back--;
         ans++;
         continue;
      }
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