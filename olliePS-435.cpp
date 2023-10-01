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
   string str;
   cin >> str;
   ll idx = -1;
   for(ll i = 0 ; i < n - 1 ; i++)
   {
      if(str[i] == 'R' && str[i + 1] == 'L')
      {
         cout << 0 << endl;
         return;
      }
      if(str[i] == 'L' && str[i + 1] == 'R')
      {
         idx = i + 1;
      }
   }
   if(idx == -1)
   {
      cout << -1 << endl;
      return;
   }
   cout << idx << endl;
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