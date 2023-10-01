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
    ll n , k;
    cin >> n >> k;
    set<ll> st;
    map<ll , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
        mp[x]++;
    }
    vector<ll> poss;
    for(auto it : st)
    {
        if(mp[it] < k)
        {
            continue;
        }
        else
        {
            poss.push_back(it);
        }
    }
    ll sz = poss.size();
    if(sz == 0)
    {
        cout << -1 << endl;
        return;
    }
    else if(sz == 1)
    {
        cout << poss[0] << " " << poss[0] << endl;
        return;
    }
    else
    {
        vector<pair<ll , ll>> range;
        ll i = 0 , j = 1 , start = 0 , end = 0;
        while(j < sz)
        {
            if(poss[j] - poss[j-1] != 1)
            {
                if(end == j-1)
                {
                    range.push_back({start , end});
                }
                i = j;
            }
            else
            {
                if((j-i) == 1)
                {
                    start = i;
                }
                end = j;
            }
            j++;
        }
        if(end == j-1)
        {
            range.push_back({start , end});
        }
        ll mn = -1 , idx;
        for(ll i = 0 ; i < range.size() ; i++)
        {
            ll cr = range[i].second - range[i].first;
            if(cr > mn)
            {
                mn = cr;
                idx = i;
            }
        }
        ll lans = poss[range[idx].first] , rans = poss[range[idx].second];
        cout << lans << " " << rans << endl;
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