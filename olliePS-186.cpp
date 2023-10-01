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
    cout << endl;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n , m;
        cin >> n >> m;
        vector<pair<ll , ll>> v;
        vector<ll> vec;
        unordered_map<ll , ll> mp;
        for(ll j = 1 ; j <= m ; j++)
        {
            ll x , w;
            cin >> x >> w;
            mp[x] = j;
            v.push_back({w , x});           
        }
        sort(v.begin() , v.end());
        ll sum = 0;
        for(ll j = 0 ; j < 2*n ; j++)
        {
            sum += v[j].first;
            vec.push_back(v[j].second);
        }
        cout << sum << endl;
        sort(vec.begin() , vec.end());
        ll start = 0 , end = vec.size()-1;
        while(start < end)
        {
            cout << mp[vec[start]] << " " << mp[vec[end]] << endl;
            start++;
            end--;
        }
    }
    return 0;
}