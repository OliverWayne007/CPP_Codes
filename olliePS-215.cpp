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
    string str;
    cin >> str;
    ll n = str.length();
    vector<ll> vc(26 , 0);
    for(ll i = 0 ; i < n ; i++)
    {
        vc[str[i] - 'a']++;
    }
    ll cnt = 0;
    for(ll i = 0 ; i < 26 ; i++)
    {
        if(vc[i] % 2 != 0)
        {
            vc[i] -= 1;
            cnt++;
        }
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