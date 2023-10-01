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
    ll a , b , c;
    cin >> a >> b >> c;
    ll e1 = a - 1;
    ll e2 = abs(b - c) + abs(c - 1);
    if(e1 < e2)
    {
        cout << 1 << endl;
        return;
    }
    if(e1 > e2)
    {
        cout << 2 << endl;
        return;
    }
    cout << 3 << endl;
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