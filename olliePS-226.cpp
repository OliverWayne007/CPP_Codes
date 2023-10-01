#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
   ll n;
   cin >> n;
   vector<ll> v , vec;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
   }
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      vec.push_back(x);
   }
   for(ll i = 0 ; i < n ; i++)
   {
      if(v[i] >= vec[i])
      {
         ll temp = v[i];
         v[i] = vec[i];
         vec[i] = temp;
      }
      else
      {
         continue;
      }
   }
   ll sum = 0;
   for(ll i = 1 ; i < n ; i++)
   {
      sum += abs(v[i]-v[i-1]) + abs(vec[i]-vec[i-1]);
   }
   cout << sum << endl;
   return;
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
      solution();
   }
   return 0;
}