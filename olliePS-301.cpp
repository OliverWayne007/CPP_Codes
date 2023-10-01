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
    vector<ll> start , finish;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        start.push_back(x);
    }
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        finish.push_back(x);
    }
    for(ll i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            cout << finish[i] - start[i] << " ";
        }
        else
        {
            cout << finish[i] - max(start[i] , finish[i-1]) << " ";
        }
    }
    cout << endl;
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