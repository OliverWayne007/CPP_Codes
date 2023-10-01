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
   ll n , q;
   cin >> n >> q;
   vector<ll> v , pre;
   v.push_back(0) , pre.push_back(0);
   ll sum = 0;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
      sum += x;
      pre.push_back(sum);
   }
   for(ll i = 1 ; i <= q ; i++)
   {
      ll l , r , k;
      cin >> l >> r >> k;
      ll new_sum = sum - (pre[r] - pre[l] + v[l]) + (r - l + 1) * k;
      if(new_sum % 2 == 1)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
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