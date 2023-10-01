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
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for(ll i = 0 ; i < n-2 ; i += 2)
    {
        if(v[i] % 2 == 0 && v[i+2] % 2 != 0)
        {
            cout << "NO" << endl;
            return;
        }
        if(v[i] % 2 != 0 && v[i+2] % 2 == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    for(ll i = 1 ; i < n-2 ; i += 2)
    {
        if(v[i] % 2 == 0 && v[i+2] % 2 != 0)
        {
            cout << "NO" << endl;
            return;
        }
        if(v[i] % 2 != 0 && v[i+2] % 2 == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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