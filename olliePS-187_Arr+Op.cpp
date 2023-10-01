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
        ll n , k;
        cin >> n >> k;
        vector<ll> v , vec;
        map<ll , ll> mp;
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin() , v.end());
        ll sum = 0;
        for(ll j = 0 ; j < n - (2 * k) ; j++)
        {
            sum += v[j];
        }
        if(k == 0)
        {
            cout << sum << endl;
        }
        else
        {
            for(ll j = n - (2 * k) ; j < n ; j++)
            {
                mp[v[j]]++;
            }
            for(auto it : mp)
            {
                vec.push_back(it.second);
            }
            sort(vec.begin() , vec.end());
            ll total = 0;
            for(ll j = 0 ; j < vec.size() ; j++)
            {
                total += vec[j];
            }
            if(total/2 >= vec[vec.size()-1])
            {
                cout << sum << endl;
            }
            else
            {
                sum += (2 * vec[vec.size()-1] - total)/2;
                cout << sum << endl;
            }
        }
    }
    return 0;
}