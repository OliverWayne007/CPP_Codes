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
    ll n , t;
    cin >> n >> t;
    vector<ll> a(n+1 , -1);
    for(ll i = 1 ; i < n ; i++)
    {
        cin >> a[i];
    }
    ll idx = 1;
    while(idx < t && idx < n)
    {
        idx += a[idx];
    }
    if(idx == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}