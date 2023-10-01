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
   sort(v.begin() , v.end());
   vector<ll> ans;
   ll i = 0 , j = n - 1;
   while(i <= j)
   {
      if(i == j)
      {
         ans.push_back(v[i]);
      }
      else
      {
         ans.push_back(v[j]);
         ans.push_back(v[i]);
      }
      i++;
      j--;
   }
   ll sum = ans[0];
   for(ll i = 1 ; i < n ; i++)
   {
      if(ans[i] == sum)
      {
         cout << "NO" << endl;
         return;
      }
      sum += ans[i];
   }
   cout << "YES" << endl;
   for(auto it : ans)
   {
      cout << it << " ";
   }
   cout << endl;
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