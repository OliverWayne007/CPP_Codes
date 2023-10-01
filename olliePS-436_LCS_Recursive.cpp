#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

ll LCS(string& s1 , string& s2 , ll idx , ll ind , ll n , ll m)
{
   if(ind == m)
   {
      return 0;
   }
   ll ans = 0;
   for(ll i = idx ; i < n ; i++)
   {
      if(s1[i] != s2[ind])
      {
         ll poss = LCS(s1 , s2 , i , ind + 1 , n , m);
         ans = max(ans , poss);
      }
      else
      {
         ll take = 1 + LCS(s1 , s2 , i + 1 , ind + 1 , n , m);
         ll not_take = LCS(s1 , s2 , i , ind + 1 , n , m);
         ans = max(ans , max(take , not_take));
      }
   }
   return ans;
}

void Solution(ll T)
{
   ll n , m;
   cin >> n >> m;
   string s , str;
   cin >> s >> str;
   ll ans = LCS(s , str , 0 , 0 , n , m);
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