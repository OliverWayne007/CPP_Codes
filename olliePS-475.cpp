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
    vector<ll> v;
    map<ll , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    ll min_ele = (*mp.begin()).first , freq = (*mp.begin()).second;
    if(min_ele > 0)
    {
        cout << 0 << endl;
        return;
    }
    if(n % 2 == 1)
    {
        if(freq <= n/2 + 1)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            ll mxe = *max_element(v.begin() , v.end());
            if(mxe > 1 || mxe < 1)
            {
                cout << 1 << endl;
                return;
            }
            if(mxe == 1)
            {
                cout << 2 << endl;
                return;
            }
        }
    }
    if(n % 2 == 0)
    {
        if(freq <= n/2)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            ll mxe = *max_element(v.begin() , v.end());
            if(mxe > 1 || mxe < 1)
            {
                cout << 1 << endl;
                return;
            }
            if(mxe == 1)
            {
                cout << 2 << endl;
                return;
            }
        }
    }
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