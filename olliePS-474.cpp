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
   map<char , int> mp;
   for(auto it : str)
   {
      mp[it]++;
   }
   if(mp.size() == 1)
   {
      cout << -1 << endl;
      return;
   }
   if(mp.size() > 2)
   {
      cout << 4 << endl;
      return;
   }
   for(auto it : mp)
   {
      if(it.second == 2)
      {
         cout << 4 << endl;
         return;
      }
      else
      {
         cout << 6 << endl;
         return;
      }
   }
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