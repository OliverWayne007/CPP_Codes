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
    map<ll , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    sort(v.begin() , v.end());
    ll ans;
    if(v[0] == v[n - 1])
    {
        ans = n * (n - 1);
        cout << ans << endl;
        return;
    }
    ans = 2 * mp[v[0]] * mp[v[n - 1]];
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