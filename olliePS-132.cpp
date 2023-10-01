#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    vector<pair<ll , ll>> vp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll h , a;
        cin >> h >> a;
        vp.push_back({h , a});
    }
    ll cnt = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        for(ll j = 0 ; j < n ; j++)
        {
            if(j == i)
            {
                continue;
            }
            else
            {
                if(vp[i].first == vp[j].second)
                {
                    cnt++;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}