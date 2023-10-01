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
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    if(n == 1)
    {
        cout << v[0] << endl;
        return;
    }
    sort(v.begin() , v.end());
    ll mn = v[0] , cmn = v[0] , sum = 0;
    for(ll i = 1 ; i < n ; i++)
    {
        v[i] += sum;
        sum -= v[i - 1];
        v[i] -= v[i - 1];
        cmn = v[i];
        mn = max(mn , cmn);
    }
    cout << mn << endl;
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