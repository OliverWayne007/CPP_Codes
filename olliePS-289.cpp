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
    bool check = true;
    ll sum = 0;
    for(auto it : mp)
    {
        sum += it.second;
        if(it.second > 1)
        {
            check = false;
        }
    }
    if(check == true)
    {
        cout << mp.size() << endl;
        return;
    }
    else
    {
        ll var = sum - mp.size();
        if(var % 2 == 0)
        {
            cout << mp.size() << endl;
            return;
        }
        else
        {
            cout << mp.size() - 1 << endl;
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