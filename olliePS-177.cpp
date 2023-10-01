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
        ll x , a , b , c;
        cin >> x >> a >> b >> c;
        vector<ll> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin() , v.end());
        cout << (x - 1)*v[0] + v[1] << endl;
    }
    return 0;
}