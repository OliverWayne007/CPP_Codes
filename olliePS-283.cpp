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
   ll n;
   cin >> n;
   string str;
   cin >> str;
   if(n == 2)
   {
      cout << 2 << endl;
      return;
   }
   else if(n % 2 != 0)
   {
      ll cnt = 1;
      char ch = str[n/2];
      ll lidx = n/2 - 1 , ridx = n/2 + 1;
      while(str[lidx] == ch && str[ridx] == ch)
      {
         cnt += 2;
         lidx--;
         ridx++;
      }
      cout << cnt << endl;
      return;
   }
   else
   {
      ll lidx = n/2 - 2 , ridx = n/2 + 1 , cnt = 2;
      char ch = str[n/2];
      while(str[lidx] == ch && str[ridx] == ch)
      {
         cnt += 2;
         lidx--;
         ridx++;
      }
      cout << cnt << endl;
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