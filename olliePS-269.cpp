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
   if(n % 2 != 0)
   {
      cout << -1 << endl;
      return;
   }
   else
   {
      if(n < 4)
      {
         cout << -1 << endl;
         return;
      }
      else
      {
         ll mx , mn;
         if(n % 6 == 0)
         {
            mn = n/6;
         }
         if(n % 6 == 4)
         {
            mn = (n - 4)/6 + 1;
         }
         if(n % 6 == 2)
         {
            mn = (n - 8)/6 + 2;
         }
         if(n % 4 == 0)
         {
            mx = n/4;
         }
         if(n % 4 == 2)
         {
            mx = (n - 6)/4 + 1;
         }
         cout << mn << " " << mx << endl;
         return;
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