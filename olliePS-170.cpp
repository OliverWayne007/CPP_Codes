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
        vector<ll> wz , xy , xz , aps;
        for(ll j = 1 ; j <= n ; j++)
        {
            for(ll k = 1 ; k <= n ; k++)
            {
                wz.push_back(j * k);
                xy.push_back(j * k);
                xz.push_back(j * k);
            }
        }
        ll cnt = 0;
        for(ll j = 0 ; j < wz.size() ; j++)
        {
            for(ll k = 0 ; k < xy.size() ; k++)
            {
                aps.push_back(wz[j] + xy[k]);
            }
        }
        for(ll j = 0 ; j < aps.size() ; j++)
        {
            for(ll k = 0 ; k < xz.size() ; k++)
            {
                if(aps[j] % xz[k] == 0)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}