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
    vector<ll> a , b , zero , one;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }
    for(ll i = 0 ; i < n ; i++)
    {
        if(a[i] == 0)
        {
            zero.push_back(b[i]);
        }
        else
        {
            one.push_back(b[i]);
        }
    }
    sort(zero.begin() , zero.end());
    sort(one.begin() , one.end());
    ll zs = zero.size() , os = one.size();
    ll ans = 0;
    if(zs == os)
    {
        if(zero[0] >= one[0])
        {
            ans += one[0] + 2 * zero[0];
        }
        else
        {
            ans += zero[0] + 2 * one[0];
        }
        for(ll i = 1 ; i < zs ; i++)
        {
            ans += 2 * one[i] + 2 * zero[i];
        }
    }
    else if(zs > os)
    {
        ll idx = os , zid = zs - 1 , oid = os - 1;
        while(idx > 0)
        {
            ans += 2 * one[oid] + 2 * zero[zid];
            oid--;
            zid--;
            idx--;
        }
        for(ll i = 0 ; i <= zid ; i++)
        {
            ans += zero[i];
        }
    }
    else
    {
        ll idx = zs , zid = zs - 1 , oid = os - 1;
        while(idx > 0)
        {
            ans += 2 * one[oid] + 2 * zero[zid];
            oid--;
            zid--;
            idx--;
        }
        for(ll i = 0 ; i <= oid ; i++)
        {
            ans += one[i];
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