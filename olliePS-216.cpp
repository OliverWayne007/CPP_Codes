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
    ll n , a , b , c;
    cin >> n;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cin >> a >> b >> c;
    ll cnt = 0;
    for(ll i = 0 ; i < n-2 ; i++)
    {
        for(ll j = i+1 ; j < n-1 ; j++)
        {
            if(abs(v[i] - v[j]) <= a)
            {
                for(ll k = j+1 ; k < n ; k++)
                {
                    if(abs(v[j] - v[k]) <= b && abs(v[i] - v[k]) <= c)
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << endl;
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