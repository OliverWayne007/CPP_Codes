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
   ll prev1 = 1 , prev2 = 0;
   for(ll i = 2 ; i <= n ; i++)
   {
      int curr = prev1 + prev2;
      prev2 = prev1;
      prev1 = curr;
   }
   cout << prev1 << endl;
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
