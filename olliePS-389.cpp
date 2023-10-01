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
   vector<ll> a;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      a.push_back(x);
   }
   vector<ll> b;
   b.push_back(a[0]);
   for(ll i = 1 ; i < n ; i++)
   {
      ll lcm = (a[i] * a[i - 1])/__gcd(a[i] , a[i - 1]);
      b.push_back(lcm);
   }
   b.push_back(a[n - 1]);
   for(ll i = 0 ; i < n ; i++)
   {
      ll hcf = __gcd(b[i] , b[i + 1]);
      if(a[i] != hcf)
      {
         cout << "NO" << endl;
         return;
      }
   }
   cout << "YES" << endl;
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