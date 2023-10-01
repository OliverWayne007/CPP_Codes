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
    ll n , k;
    cin >> n >> k;
    map<ll , ll> mp;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x] = 1;
    }
    for(auto it : mp)
    {
        if(mp[it.first + k] == 1 || mp[it.first - k] == 1)
        {
            cout << "YES" << endl;
        }
    }
    cout << endl;
    for(auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}