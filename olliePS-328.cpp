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
    ll n , x;
    cin >> n >> x;
    if(x < n)
    {
        cout << -1 << endl;
        return;
    }
    cout << (x - n + 1) << " ";
    for(ll i = 1 ; i <= n ; i++)
    {
        if(i == (x - n + 1))
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
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