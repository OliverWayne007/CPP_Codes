#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define MAX 1000000000
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
        ll total = 0;
        vector<ll> v;
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            total += x;
            v.push_back(x);
        }
        if(n == 1)
        {
            cout << total << endl;
        }
        else
        {
            ll ps = 0 , mini = total;
            for(ll j = 0 ; j < n ; j++)
            {
                ps += v[j];
                ll maxi = max(ps , total - ps);
                mini = min(mini , maxi);
            }
            cout << mini << endl;
        }
    }
    return 0;
}