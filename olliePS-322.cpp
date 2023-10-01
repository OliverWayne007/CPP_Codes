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
    for(ll i = 1 ; i <= n ; i++)
    {
        ll moves;
        cin >> moves;
        string str;
        cin >> str;
        for(ll j = 0 ; j < moves ; j++)
        {
            if(str[j] == 'D')
            {
                if(v[i - 1] == 9)
                {
                    v[i - 1] = 0;
                }
                else
                {
                    v[i - 1]++;
                }
            }
            else
            {
                if(v[i - 1] == 0)
                {
                    v[i - 1] = 9;
                }
                else
                {
                    v[i - 1]--;
                }
            }
        }
    }
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
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