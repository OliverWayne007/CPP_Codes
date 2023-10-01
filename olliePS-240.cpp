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
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll mnc = INT_MAX;
    for(ll i = 0 ; i < n ; i++)
    {
        vector<ll> b(n , 0);
        ll cnt = 0;
        for(ll j = i-1 ; j >= 0 ; j--)
        {
            ll num = abs(b[j+1])/v[j] + 1;
            cnt += num;
            b[j] = 0 - (num * v[j]);
        }
        for(ll k = i+1 ; k < n ; k++)
        {
            ll num = b[k-1]/v[k] + 1;
            cnt += num;
            b[k] = num * v[k];
        }
        mnc = min(mnc , cnt);
    }
    cout << mnc << endl;
    return;
}

int main()
{
   flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}