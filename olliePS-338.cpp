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
    cout << n << endl;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        v.push_back(i);
        cout << i << " ";
    }
    cout << endl;
    for(ll i = 1 ; i < n ; i++)
    {
        swap(v[i] , v[i - 1]);
        for(auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
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