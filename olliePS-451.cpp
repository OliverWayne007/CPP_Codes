#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
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
    ll hcf = 0;
    for(auto it : v)
    {
        hcf = __gcd(hcf , it);
    }
    if(hcf == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = n;
    for(ll i = n - 1 ; i >= 0 ; i--)
    {
        ll idx = i + 1;
        ll hcd = __gcd(v[i] , idx);
        if(__gcd(hcd , hcf) != 1)
        {
            continue;
        }
        else
        {
            ans = min(ans , n - idx + 1);
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}