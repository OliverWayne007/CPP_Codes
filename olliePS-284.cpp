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
    vector<ll> a , b;
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
    ll cnt = 0;
    vector< pair<ll , ll> > vp;
    for(ll i = 0 ; i < n-1 ; i++)
    {
        for(ll j = 0 ; j < n-1-i ; j++)
        {
            if(a[j] >= a[j+1] && b[j] >= b[j+1])
            {
                cnt++;
                vp.push_back({j+1 , j+2});
                swap(a[j] , a[j+1]);
                swap(b[j] , b[j+1]);
            }
            else if(a[j] <= a[j+1] && b[j] <= b[j+1])
            {
                continue;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if(cnt == 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << cnt << endl;
    for(auto it : vp)
    {
        cout << it.first << " " << it.second << endl;
    }
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