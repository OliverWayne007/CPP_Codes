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
    map<ll , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    if(mp.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll ofc = 0 , tfc = 0;
    for(auto it : mp)
    {
        if(it.second >= 2)
        {
            tfc++;
        }
        else
        {
            ofc++;
        }
    }
    if(tfc == mp.size())
    {
        cout << mp.size() << endl;
        return;
    }
    else if(ofc == mp.size())
    {
        if(mp.size() % 2 == 0)
        {
            cout << mp.size()/2 << endl;
            return;
        }
        else
        {
            cout << mp.size()/2 + 1 << endl;
            return;
        }
    }
    else
    {
        if(ofc % 2 == 0)
        {
            cout << tfc + ofc/2 << endl;
            return;
        }
        else
        {
            cout << tfc + ofc/2 + 1 << endl;
            return;
        }
    }
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