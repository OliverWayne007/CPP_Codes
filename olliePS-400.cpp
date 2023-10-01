#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define pii pair<int , int>
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n , m;
    cin >> n >> m;
    vector<pii> v;
    map<ll , ll> mpr , mpc;
    for(ll i = 1 ; i <= m ; i++)
    {
        ll row , col;
        cin >> row >> col;
        v.push_back({row , col});
        mpr[row]++;
        mpc[col]++;
    }
    for(auto it : v)
    {
        for(ll col = 1 ; col <= n ; col++)
        {
            if(col != it.second && mpc.find(col) == mpc.end())
            {
                cout << "YES" << endl;
                return;
            }
        }
        for(ll row = 1 ; row <= n ; row++)
        {
            if(row != it.first && mpr.find(row) == mpr.end())
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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