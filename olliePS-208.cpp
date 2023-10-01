#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    ll n , k;
    cin >> n >> k;
    map<ll , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    for(auto it : mp)
    {
        if(mp.find(it.first + k) != mp.end() || mp.find(it.first - k) != mp.end())
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

}

int main()
{
    flash();
    ll t;
    cin >> t;
    while(t--)
    {
        solution();
    }
}