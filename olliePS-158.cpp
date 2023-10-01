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
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll cei = 0 , coi = 0 , cee = 0 , coe = 0 , cnt = 0;
        for(ll j = 0 ; j < n ; j++)
        {
            if(j % 2 == 0)
            {
                cei++;
            }
            if(j % 2 != 0)
            {
                coi++;
            }
            if(v[j] % 2 == 0)
            {
                cee++;
            }
            if(v[j] % 2 != 0)
            {
                coe++;
            }
            if((v[j] % 2 == 0 && j % 2 != 0) || (v[j] % 2 != 0 && j % 2 == 0))
            {
                cnt++;
            }
        }
        if(coe != coi)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt/2 << endl;
        }
    }
    return 0;
}