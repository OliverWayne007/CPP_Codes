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
    map<int , int> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    int sz = n , i = 0 , ans = 0;
    while(mp.size() != sz && i < n)
    {
        mp[v[i]]--;
        if(mp[v[i]] == 0)
        {
            mp.erase(v[i]);
        }
        ans++;
        sz--;
        i++;
    }
    cout << ans << endl;
    return;
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
   return 0;
}