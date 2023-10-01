#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
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
    vector<ll> vec = v;
    sort(vec.begin() , vec.end());
    vector<ll> ans = v;
    for(ll i = 0 ; i < n ; i++)
    {
        if(v[i] == vec[n - 1])
        {
            ans[i] = vec[n - 2];
            continue;
        }
        auto it = lower_bound(vec.begin() , vec.end() , 2 * v[i]);
        if(it == vec.end())
        {
            ans[i] = vec[n - 1];
            continue;
        }
        ll lb = *lower_bound(vec.begin() , vec.end() , 2 * v[i]);
        if(lb == 2 * v[i])
        {
            ans[i] = lb;
            continue;
        }
        if(lb > 2 * v[i])
        {
            ll idx = it - vec.begin();
            ll mentor = vec[idx - 1];
            if(mentor > v[i])
            {
                ans[i] = mentor;
                continue;
            }
            if(mentor == v[i])
            {
                if(mp[mentor] > 1)
                {
                    ans[i] = mentor;
                }
                else
                {
                    if(v[i] == vec[0])
                    {
                        ans[i] = -1;
                    }
                    else
                    {
                        ans[i] = vec[idx - 2];
                    }
                }
                continue;
            }
        }
    }
    cout << "Case #" << T << ": ";
    for(auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
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
      solution(t);
      t++;
   }
   return 0;
}