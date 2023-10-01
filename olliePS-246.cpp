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
    vector<string> v;
    set<string> st;
    map<string , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        string str;
        cin >> str;
        st.insert(str);
        mp[str]++;
    }
    for(auto it : st)
    {
        v.push_back(it);
    }
    ll size = v.size() , cnt = 0;
    for(ll i = 0 ; i < size-1 ; i++)
    {
        for(ll j = i + 1 ; j < size ; j++)
        {
            if(v[i][0] == v[j][0] && v[i][1] != v[j][1])
            {
                cnt += mp[v[i]] * mp[v[j]];
            }
            else if(v[i][0] != v[j][0] && v[i][1] == v[j][1])
            {
                cnt += mp[v[i]] * mp[v[j]];
            }
            else
            {
                continue;
            }
        }
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