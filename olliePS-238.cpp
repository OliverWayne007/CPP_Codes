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
    ll n , m;
    cin >> n >> m;
    if(n == 1 && m == 1)
    {
        cout << 0 << endl;
        return;
    }
    if((n == 1 && m > 2) || (m == 1 && n > 2))
    {
        cout << -1 << endl;
        return;
    }
    if((n == 1 && m == 2) || (m == 1 && n == 2))
    {
        cout << 1 << endl;
        return;
    }
    if(n > 1 && m > 1)
    {
        ll cnt = 0;
        cnt += 2 * (min(n , m) - 1);
        if(abs(n - m) % 2 == 0)
        {
            cnt += 2 * abs(n - m);
        }
        else
        {
            cnt += (2 * abs(n - m)) - 1;
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