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
    ll n , k;
    cin >> n >> k;
    vector<ll> v;
    v.push_back(0);
    map<ll , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    if(k == n)
    {
        cout << 0 << endl;
        return;
    }
    for(ll i = 1 ; i <= k ; i++)
    {
        mp[v[i]]++;
    }
    ll ans = 0;
    for(ll i = 1 ; i <= k ; i++)
    {
        if(mp.find(i) == mp.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
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