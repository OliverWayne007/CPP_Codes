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
    ll n , k;
    cin >> n >> k;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    if(k == n)
    {
        cout << 1 << endl;
        return;
    }
    ll sum = 0, idx = 0;
    for(ll i = 0 ; i < k ; i++)
    {
        sum += v[i];
    }
    ll local_sum = sum;
    for(ll i = k ; i < n ; i++)
    {
        local_sum = (local_sum + v[i]) - v[i-k];
        if(local_sum < sum)
        {
            sum = local_sum;
            idx = i-k+1;
        }
        else
        {
            continue;
        }
    }
    cout << idx+1 << endl;
    return;
}

int main()
{
   flash();
   solution();
   return 0;
}