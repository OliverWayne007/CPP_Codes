#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
const long long int MOD = 1e9 + 7;
const long long int MAX = 1e9;
const long long int INF = 1e18;

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        vector<ll> vec(1e5 + 1 , 0);
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            vec[x]++;
        }
        cout << max(vec[0] , n - vec[0]) << endl;
    }
    return 0;
}