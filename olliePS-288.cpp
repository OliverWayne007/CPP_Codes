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
    ll a , b , c , d;
    cin >> a >> b >> c >> d;
    ll cnt = 0;
    if(b > a)
    {
        cnt++;
    }
    if(c > a)
    {
        cnt++;
    }
    if(d > a)
    {
        cnt++;
    }
    cout << cnt << endl;
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