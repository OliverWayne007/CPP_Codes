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
   if(n == 3)
   {
      cout << -1 << endl;
      return;
   }
   if(n == 5)
   {
      cout << 5 << " " <<  4 << " " <<  1 << " " <<  2 << " " <<  3 << endl;
      return;
   }
   if(n % 2 == 0)
   {
      for(ll i = n ; i > 0 ; i--)
      {
         cout << i << " ";
      }
      cout << endl;
   }
   else
   {
      for(ll i = n ; i > n/2 + 1 ; i--)
      {
         cout << i << " ";
      }
      cout << n/2 << " " << n/2 + 1 << " ";
      for(ll i = n/2 - 1 ; i > 0 ; i--)
      {
         cout << i << " ";
      }
      cout << endl;
   }
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