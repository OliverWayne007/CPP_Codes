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
    cout << 2 << endl;
    vector<ll> v(n+1 , 0);
    ll i = 1;
    while(i <= n/2)
    {
        if(v[i] == 0)
        {
            for(ll j = i ; j <= n ; j *= 2)
            {
                v[j] = 1;
                cout << j << " ";
            }
        }
        i++;
    }
    for(ll i = 1 ; i <= n ; i++)
    {
        if(v[i] == 0)
        {
            cout << i << " ";
        }
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