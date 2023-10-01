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
    ll n;
    cin >> n;
    vector<ll> vp1 , vp2 , vp3;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll m;
        cin >> m;
        string str;
        cin >> str;
        ll val = (str[0] - '0') * 2 + (str[1] - '0');
        vp1.push_back(MAX);
        vp2.push_back(MAX);
        vp3.push_back(MAX);
        if(val == 1)
        {
            vp1.push_back(m);
        }
        if(val == 2)
        {
            vp2.push_back(m);
        }
        if(val == 3)
        {
            vp3.push_back(m);
        }
    }
    sort(vp1.begin() , vp1.end());
    sort(vp2.begin() , vp2.end());
    sort(vp3.begin() , vp3.end());
    ll ans = min(vp1[0] + vp2[0] , vp3[0]);
    if(ans >= MAX)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
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