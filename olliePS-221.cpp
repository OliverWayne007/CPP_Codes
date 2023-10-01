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
    ll oc = 0 , ec = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if(x % 2 == 0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    if(oc == n || ec == n)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        if(oc > ec)
        {
            if(oc % 2 == 0)
            {
                if(oc/2 <= ec)
                {
                    cout << oc/2 << endl;
                    return;
                }
            }
            cout << ec << endl;
            return;
        }
        else
        {
            if(oc % 2 == 0)
            {
                cout << oc/2 << endl;
                return;
            }
            else
            {
                cout << ec << endl;
                return;
            }
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
   return 0;
}