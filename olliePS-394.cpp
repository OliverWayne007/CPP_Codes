#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n , q;
    cin >> n >> q;
    vector<ll> vn , vq , max_height_attained;
    vn.push_back(0);
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        vn.push_back(x);
    }
    for(ll i = 1 ; i <= q ; i++)
    {
        ll x;
        cin >> x;
        vq.push_back(x);
    }
    ll height_attained = 0;
    for(auto it : vn)
    {
        height_attained += it;
        max_height_attained.push_back(height_attained);
    }
    vector<ll> curr_max;
    ll mx = -1;
    for(auto it : vn)
    {
        mx = max(mx , it);
        curr_max.push_back(mx);
    }
    for(auto it : vq)
    {
        ll idx = upper_bound(curr_max.begin() , curr_max.end() , it) - curr_max.begin();
        idx -= 1;
        cout << max_height_attained[idx] << " ";
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
      Solution(t);
      t++;        
   }
   return 0;
}