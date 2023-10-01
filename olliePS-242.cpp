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
    ll n , x;
    cin >> n >> x;
    vector<ll> a;
    ll sum = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll y;
        cin >> y;
        a.push_back(y);
        sum += y;
    }
    ll mc = *min_element(a.begin() , a.end());
    ll shit = x/mc + (x % mc != 0);
    cout << max(shit , n) << endl;
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