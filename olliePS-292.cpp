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
    ll n , s;
    cin >> n >> s;
    vector<ll> v;
    ll sum = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    if(sum < s)
    {
        cout << -1 << endl;
        return;
    }
    else if(sum == s)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll extra_sum = sum - s;
        vector<ll> pre , suff;
        pre.push_back(0);
        suff.push_back(0);
        ll ps = 0 , ss = 0;
        for(ll i = 0 ; i < n ; i++)
        {
            if(v[i] == 1)
            {
                ps++;
                pre.push_back(i+1);
            }
            if(ps == extra_sum)
            {
                break;
            }
        }
        for(ll i = n - 1 ; i >= 0 ; i--)
        {
            if(v[i] == 1)
            {
                ss++;
                suff.push_back(n - i);
            }
            if(ss == extra_sum)
            {
                break;
            }
        }
        ll mn = INT_MAX;
        for(ll i = 0 ; i <= extra_sum ; i++)
        {
            ll oprs = pre[i] + suff[extra_sum - i];
            mn = min(mn , oprs);
        }
        cout << mn << endl;
        return;
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