#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll test_case)
{
   ll n;
   cin >> n;
   string str;
   cin >> str;
   ll scc = 0 , dc = 0 , ucc = 0 , lcc = 0;
   for(ll i = 0 ; i < n ; i++)
   {
      if(str[i] == '@' || str[i] == '*' || str[i] == '#' || str[i] == '&')
      {
         scc++;
      }
      else
      {
         if(str[i] - 'a' < 0)
         {
            if(str[i] - 'A' < 0)
            {
               dc++;
            }
            else
            {
               ucc++;
            }
         }
         else
         {
            lcc++;
         }
      }
   }
   if(scc == 0)
   {
      str = str + '#';
   }
   if(dc == 0)
   {
      str = str + '8';
   }
   if(ucc == 0)
   {
      str += 'B';
   }
   if(lcc == 0)
   {
      str += 'b';
   }
   if(str.length() < 7)
   {
      for(ll k = str.length() ; k < 7 ; k++)
      {
         str += '8';
      }
   }
   cout << "Case #" << test_case << ": " << str << endl;
   return;
}

int main()
{
   flash();
   ll t;
   cin >> t;
   for(ll j = 1 ; j <= t ; j++)
   {
      solution(j);
   }
   return 0;
}