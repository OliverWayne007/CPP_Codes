#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
{
    ll n , m , sx , sy , d;
    cin >> n >> m >> sx >> sy >> d;
    if((sx - d > 1 && sy + d < m) || (sy - d > 1 && sx + d < n))
    {
        cout << m + n - 2 << endl;
        return;
    }
    cout << -1 << endl;
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
      solution(t);
      t++;        
   }
   return 0;
}