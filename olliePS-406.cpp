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
   ll n , a , b;
   cin >> n >> a >> b;
   if(a == n && b == n)
   {
      cout << "YES" << endl;
      return;
   }
   if(a == n && b != n)
   {
      cout << "NO" << endl;
      return;
   }
   if(b == n  && a != n)
   {
      cout << "NO" << endl;
      return;
   }
   if(b > (n - a - 2))
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