#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
        for(ll i = 0 ; i < n ; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        if(n == 2)
        {
            v[1] = 2 * v[0];
        }
        else
        {
            ll m = n - (n % 3);
            for(ll i = 0 ; i < m ; i += 3)
            {
                v[i] = v[i+2] = 2 * v[i+1];
            }
            if(n % 3 == 1)
            {
                v[n-1] = 2;
            }
            if(n % 3 == 2)
            {
                v[n-2] = 2 * v[n-1];
            }
        }
        for(auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}