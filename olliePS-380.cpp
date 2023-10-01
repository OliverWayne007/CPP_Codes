#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define pii pair<int , int>
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
   ll n , m;
   cin >> n >> m;
   if(m == 1)
   {
      cout << n - 1 << endl;
      return;
   }
   ll ans = n * (m - 1);
   cout << ans << endl;
   return;
}

int main()
{
   flash();
   ll tc = 1;
   // cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}