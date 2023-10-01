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
   string str;
   cin >> str;
   ll n = str.size();
   if(str[0] == 'B' || str[n - 1] == 'A')
   {
      cout << "NO" << endl;
      return;
   }
   ll ac = 0 , bc = 0;
   for(ll i = 0 ; i < n ; i++)
   {
      if(str[i] == 'A')
      {
         ac++;
      }
      else
      {
         if(ac == 0)
         {
            cout << "NO" << endl;
            return;
         }
         else
         {
            ac--;
         }
      }
   }
   cout << "YES" << endl;
   return;
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