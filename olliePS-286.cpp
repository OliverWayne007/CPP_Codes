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
    ll n , m , sum = 0;
    cin >> n;
    vector<ll> a , b;
    for(ll i = 0 ; i < n ; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    for(ll i = 0 ; i < m ; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
        sum += x;
    }
    cout << a[(sum % n)] << endl;
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