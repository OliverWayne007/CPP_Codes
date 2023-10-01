#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int MAX = 1e9;
const long long int INF = 1e18;

int main()
{
    flash();
    ll n;
    cin >> n;
    vector<ll> v(100 , 0);
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v[x]++;
    }
    ll mx = 0;
    for(ll i = 1 ; i <= 98 ; i++)
    {
        mx = max(mx , v[i] + v[i + 1]);
    }
    cout << mx << endl;
    return 0;
}