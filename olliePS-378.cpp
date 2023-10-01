#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

static bool cmp(pair<char , ll> p1 , pair<char , ll> p2)
{
    if(p1.second < p2.second)
    {
        return true;
    }
    return false;
} 

void Solution(ll T)
{
    string str;
    cin >> str;
    ll n = str.size();
    char st = str[0] , en = str[n - 1];
    vector<pair<char , ll>> vp;
    for(ll i = 0 ; i < n ; i++)
    {
        vp.push_back({str[i] , i + 1});
    }
    vector<ll> ans;
    if(st <= en)
    {
        sort(vp.begin() , vp.end());
        for(ll i = 0 ; i < n ; i++)
        {
            if(vp[i].first >= st && vp[i].first <= en)
            {
                ans.push_back(vp[i].second);
            }
        }
    }
    else
    {
        sort(vp.begin() , vp.end() , greater<pair<char , ll>>());
        for(ll i = 0 ; i < n ; i++)
        {
            if(vp[i].first <= st && vp[i].first >= en)
            {
                ans.push_back(vp[i].second);
            }
        }
    }
    cout << abs(st - en) << " " << ans.size() << endl;
    cout << 1 << " ";
    for(auto it : ans)
    {
        if(it != 1 && it != n)
        {
            cout << it << " ";
        }
    }
    cout << n << endl;
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