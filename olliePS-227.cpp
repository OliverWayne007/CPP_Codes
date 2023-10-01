#include<bits/stdc++.h>
using namespace std;
// #define ll long long
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
    ll md = 32768 , rtc = 15;
    for(auto it : v)
    {
        if(it == 0)
        {
            cout << 0 << " ";
            continue;
        }
        ll op = 0;
        if(it % 2 != 0)
        {
            it = it + 1;
            op++;
        }
        ll cnt = 0 , num = it;
        while(num % md != 0)
        {
            cnt++;
            num = (num * 2) % md;
        }
        op += min(cnt , md - it);
        cout << op << " ";
    }
    cout << endl;
    return;
}

int main()
{
   flash();
   solution();
   return 0;
}