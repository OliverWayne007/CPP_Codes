#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll idx = n-1 , cnt = 0;
        while(idx >= 0)
        {
            if(v[idx] != v[n-1])
            {
                cnt++;
                idx = (n-1) - 2 * (n-idx-1);
            }
            else
            {
                idx--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}