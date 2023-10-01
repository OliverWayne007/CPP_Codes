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
   vector<pair<ll , ll>> vec;
   ll sum = 0;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
      vec.push_back({x , i});
      sum += x;
   }
   sort(vec.begin() , vec.end());
   if(sum - vec[n - 1].first < vec[n - 1].first)
   {
      cout << vec[n - 1].second << endl;
      return;
   }
   cout << 1 << endl;
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