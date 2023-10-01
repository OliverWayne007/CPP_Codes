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
   if(str[0] == 'Y' || str[0] == 'y')
   {
      if(str[1] == 'E' || str[1] == 'e')
      {
         if(str[2] == 'S' || str[2] == 's')
         {
            cout << "YES" << endl;
            return;
         }
         else
         {
            cout << "NO" << endl;
            return;
         }
      }
      else
      {
         cout << "NO" << endl;
         return;
      }
   }
   else
   {
      cout << "NO" << endl;
      return;
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