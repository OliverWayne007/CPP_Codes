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
   ll n ;
   cin >> n;
   vector<ll> v;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
   }
   ll ans = 0 , oc = 0;
   for(auto it : v)
   {
      if(it == 0)
      {
         ans += oc;
      }
      else
      {
         oc++;
      }
   }
   vector<ll> vec = v;
   for(ll i = 0 ; i < n ; i++)
   {
      if(v[i] == 0)
      {
         v[i] = 1;
         break;
      }
   }
   reverse(vec.begin() , vec.end());
   for(ll i = 0 ; i < n ; i++)
   {
      if(vec[i] == 1)
      {
         vec[i] -= 1;
         break;
      }
   }

   // for(auto it : v)
   // {
   //    cout << it << " ";
   // }
   // cout << endl;

   reverse(vec.begin() , vec.end());

   // for(auto it : vec)
   // {
   //    cout << it << " ";
   // }
   // cout << endl;

   ll mx1 = 0 , oc1 = 0 , mx2 = 0 , oc2 = 0;
   for(auto it : v)
   {
      if(it == 0)
      {
         mx1 += oc1;
      }
      else
      {
         oc1++;
      }
   }
   ans = max(ans , mx1);
   for(auto it : vec)
   {
      if(it == 0)
      {
         mx2 += oc2;
      }
      else
      {
         oc2++;
      }
   }
   ans = max(ans , mx2);
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