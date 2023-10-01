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
   for(auto &it : str)
   {
      it = tolower(it);
   }

   // for(auto &it : str)
   // {
   //    if(it - 'a' < 0)
   //    {
   //       it = (it - 'A') + 'a';
   //    }
   // }
   //cout << str << endl;

   for(auto it : str)
   {
      if(it != 'm' && it != 'e' && it != 'o' && it != 'w')
      {
         cout << "NO" << endl;
         return;
      }
   }
   string cat = "meow";
   ll idx = 0;
   char prev = cat[idx];
   if(str[0] != prev)
   {
      cout << "NO" << endl;
      return;
   }
   for(auto it : str)
   {
      if(it == prev)
      {
         continue;
      }
      else
      {
         idx++;
         prev = cat[idx];
         if(it == prev)
         {
            continue;
         }
         else
         {
            cout << "NO" << endl;
            return;
         }
      }
   }
   if(idx < 3)
   {
      cout << "NO" << endl;
      return;
   }
   cout << "YES" << endl;
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