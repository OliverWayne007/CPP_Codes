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
   ll a , b , c , x , y;
   cin >> a >> b >> c >> x >> y;
   if(a >= x && b >= y)
   {
      cout << "YES" << endl;
      return;
   }
   if(a + b + c < x + y)
   {
      cout << "NO" << endl;
      return;
   }
   if(a + b + c >= x + y)
   {
      if(c == 0)
      {
         if(a < x || b < y)
         {
            cout << "NO" << endl;
            return;
         }
      }
      if(c > 0)
      {
         if(a + c < x || b + c < y)
         {
            cout << "NO" << endl;
            return;
         }
         cout << "YES" << endl;
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