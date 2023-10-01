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
   vector<ll> a , b;
   ll ans = 0;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      a.push_back(x);
      ans += x;
   }
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      b.push_back(x);
   }
   sort(b.begin() , b.end());
   for(auto it : b)
   {
      ans += it;
   }
   ans -= b[n - 1];
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