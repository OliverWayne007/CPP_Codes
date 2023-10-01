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
    ll start = -1 , end = n;
    for(ll i = 1 ; i < n-1 ; i++)
    {
        if(v[i] == 1)
        {
            continue;
        }
        else
        {
            start = i-1;
            break;
        }
    }
    for(ll i = n-2 ; i > 0 ; i--)
    {
        if(v[i] == 1)
        {
            continue;
        }
        else
        {
            end = i+1;
            break;
        }
    }
    if(start == -1 && end == n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << end - start << endl;
    }
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
}