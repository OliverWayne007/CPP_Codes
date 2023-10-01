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
        ll mbo = INT_MIN , mbe = INT_MIN;
        for(ll j = 1 ; j <= n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        bool check = true;
        for(ll j = 0 ; j < n ; j++)
        {
            if(v[j] % 2 == 0)
            {
                mbe = max(mbe , v[j]);
                if(mbe > v[j])
                {
                    check = false;
                    break;
                }
            }
            else
            {
                mbo = max(mbo , v[j]);
                if(mbo > v[j])
                {
                    check = false;
                    break;
                }
            }
        }
        if(check == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}