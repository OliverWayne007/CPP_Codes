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
   vector<ll> v;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
   }
   for(ll i = 0 ; i < n ; i++)
   {
      if(i == 0)
      {
         ll stored = v[1];
         for(ll j = 2 ; j < n ; j++)
         {
            stored = stored ^ v[j];
         }
         if(stored == v[0])
         {
            cout << v[0] << endl;
            return;
         }
         else
         {
            continue;
         }
      }
      else
      {
         ll stored = v[0];
         for(ll j = 1 ; j < n ; j++)
         {
            if(j == i)
            {
               continue;
            }
            else
            {
               stored = stored ^ v[j];
            }
         }
         if(stored == v[i])
         {
            cout << v[i] << endl;
            return;
         }
         else
         {
            continue;
         }
      }
   }
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