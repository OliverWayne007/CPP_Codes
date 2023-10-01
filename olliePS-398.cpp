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
    string a , b;
    cin >> a >> b;
    map<char , ll> mpa , mpb;
    for(auto it : a)
    {
        mpa[it]++;
    }
    for(auto it : b)
    {
        mpb[it]++;
    }
    ll ans = 0;
    for(auto it : mpa)
    {
        if(mpb.find(it.first) != mpb.end())
        {
            ans = max(ans , min(mpa[it.first] , mpb[it.first]));
        }
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