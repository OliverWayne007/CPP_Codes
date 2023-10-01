#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll s , n;
    cin >> s >> n;
    vector<pair<ll , ll>> vp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x , y;
        cin >> x >> y;
        vp.push_back({x , y});
    }
    sort(vp.begin() , vp.end());
    bool check = true;
    for(ll i = 0 ; i < n ; i++)
    {
        if(s > vp[i].first)
        {
            s += vp[i].second;
        }
        else
        {
            check = false;
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
    return 0;
}