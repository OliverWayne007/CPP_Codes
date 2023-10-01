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
    vector<ll> a , b , a1 , b1;
    map<ll , ll> mpa , mpb;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        mpa[x]++;
    }
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }
    for(auto it : b)
    {
        if(mpa.find(it) == mpa.end() || mpa[it] == 0)
        {
            b1.push_back(it);
        }
        else
        {
            mpa[it]--;
        }
    }
    for(auto it : mpa)
    {
        if(it.second > 0)
        {
            for(ll i = 1 ; i <= it.second ; i++)
            {
                a1.push_back(it.first);
            }
        }
    }
    sort(a1.begin() , a1.end());
    sort(b1.begin() , b1.end());
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