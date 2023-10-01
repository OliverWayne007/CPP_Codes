#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

bool Good(ll w , ll h , ll n , ll en)
{
   return (en/w) * (en/h) >= n;
}

void Solution(ll T)
{
   ll w , h , n;
   cin >> w >> h >> n;
   ll st = 1 , en = 1 , ans = INF;
   while(Good(w , h , n , en) == false)
   {
      en *= 2;
   }
   while(st <= en)
   {
      ll sos = (st + en)/2;
      ll nor = (sos/h) * (sos/w);
      if(nor >= n)
      {
         ans = min(ans , sos);
         en = sos - 1;
      }
      else
      {
         st = sos + 1;
      }
   }
   cout << ans << endl;
   return;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}