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
    ll cnt = 0 , start = -1;
    for(ll i = 0 ; i < n ; i++)
    {
        if(v[i] == 0)
        {
            if(start != -1)
            {
                cnt++;
                start = -1;
            }
            else
            {
                continue;
            }
        }
        else
        {
            start = i;
        }
    }
    if(start != -1)
    {
        cnt++;
    }
    if(cnt > 2)
    {
        cout << 2 << endl;
        return;
    }
    cout << cnt << endl;
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