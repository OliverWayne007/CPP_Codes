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
    string str;
    cin >> str;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == 'B')
        {
            if(v[i] < 1)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                continue;
            }
        }
        if(str[i] == 'R')
        {
            if(v[i] > n)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                continue;
            }
        }
    }
    vector<ll> red , blue;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == 'B')
        {
            blue.push_back(v[i]);
        }
        else
        {
            red.push_back(v[i]);
        }
    }
    sort(red.begin() , red.end());
    sort(blue.begin() , blue.end());
    ll cnt = 1;
    for(ll i = 0 ; i < blue.size() ; i++)
    {
        if(blue[i] >= cnt)
        {
            cnt++;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    for(ll j = 0 ; j < red.size() ; j++)
    {
        if(red[j] <= cnt)
        {
            cnt++;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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