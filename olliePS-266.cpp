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
    ll n , m;
    cin >> n >> m;
    vector<string> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }
    ll mn = INT_MAX;
    for(ll i = 0 ; i < n-1 ; i++)
    {
        for(ll j = i+1 ; j < n ; j++)
        {
            ll sum = 0;
            for(ll k = 0 ; k < m ; k++)
            {
                sum += abs(v[i][k] - v[j][k]);
            }
            mn = min(mn , sum);
        }
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