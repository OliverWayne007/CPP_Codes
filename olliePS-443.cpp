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
   string str;
   cin >> str;
   string pi = "314159265358979323846264338327";
   ll ans = 0;
   ll n = str.size();
   for(ll i = 0 ; i < n ; i++)
   {
      if(str[i] == pi[i])
      {
         ans++;
      }
      else
      {
         break;
      }
   }
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