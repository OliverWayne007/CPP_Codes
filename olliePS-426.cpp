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
   ll a , b , c , d;
   cin >> a >> b >> c >> d;

   ll tl = a , tr = b , bl = c , br = d;
   if(tl < tr && tl < bl && tr < br && br > bl)
   {
      cout << "YES" << endl;
      return;
   }

   tl = c , tr = a , bl = d , br = b;
   if(tl < tr && tl < bl && tr < br && br > bl)
   {
      cout << "YES" << endl;
      return;
   }

   tl = d , tr = c , bl = b , br = a;
   if(tl < tr && tl < bl && tr < br && br > bl)
   {
      cout << "YES" << endl;
      return;
   }

   tl = b , tr = d , bl = a , br = c;
   if(tl < tr && tl < bl && tr < br && br > bl)
   {
      cout << "YES" << endl;
      return;
   }

   cout << "NO" << endl;
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