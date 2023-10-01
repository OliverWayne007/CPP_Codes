#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

bool check(ll n)
{
    ll i = 2;
    while((1 << i) < n+1)
    {
        i++;
    }
    if(1 << i == n+1)
    {
        return true;
    }
    return false;
}

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
        unordered_map<ll , ll> mp;
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }
        sort(v.begin() , v.end());
        ll cnt = 0;
        for(auto it : mp)
        {
            cnt += (it.second * (it.second - 1))/2;
        }
        for(ll j = 0 ; j < n ; j++)
        {
            if(check(v[j]) == true)
            {
                for(ll k = 0 ; k < j ; k++)
                {
                    if(min(v[k] , v[j]) > abs(v[j] - v[k]))
                    {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}