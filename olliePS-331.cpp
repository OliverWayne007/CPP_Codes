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
    vector<ll> make_it_two = {1 , 0 , 9 , 18 , 5 , 6 , 25 , 14 , 23 , 0};
    for(ll i = 0 ; i < n ; i++)
    {
        if(v[i] % 10 == 0)
        {
            v[i] += make_it_two[9];
        }
        else
        {
            ll idx = (v[i] % 10) - 1;
            v[i] += make_it_two[idx];
        }
    }
    sort(v.begin() , v.end());
    ll zc = 0;
    for(auto it : v)
    {
        if(it % 10 == 0)
        {
            zc++;
        }
    }
    if(zc == n && v[0] == v[n - 1])
    {
        cout << "YES" << endl;
        return;
    }
    if(zc == n && v[0] != v[n - 1])
    {
        cout << "NO" << endl;
        return;
    }
    if(zc > 0 && zc < n)
    {
        cout << "NO" << endl;
        return;
    }
    for(auto it : v)
    {
        ll diff = v[n - 1] - it;
        if(diff % 20 != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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