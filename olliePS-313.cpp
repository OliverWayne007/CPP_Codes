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
   ll v1 , v2 , v3 , v4;
   cin >> v1 >> v2 >> v3 >> v4;
   if(v1 == 0 && v2 == 0 && v3 == 0 && v4 == 0)
   {
      cout << 0 << endl;
      return;
   }
   if(v1 == 1 && v2 == 1 && v3 == 1 && v4 == 1)
   {
      cout << 2 << endl;
      return;
   }
   cout << 1 << endl;
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