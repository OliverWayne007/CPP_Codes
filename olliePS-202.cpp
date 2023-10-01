#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll oc = 0 , zc = 0;
        for(ll j = 0 ; j < n ; j++)
        {
            if(str[j] == '0')
            {
                zc++;
            }
            else
            {
                oc++;
            }
        }
        if(oc == n || zc == n)
        {
            cout << 1 << endl;
        }
        else
        {
            if(oc == zc)
            {
                cout << oc + zc << endl;
            }
            else
            {
                cout << min(oc , zc) * 2 + 1 << endl;
            }
        }
    }
    return 0;
}