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
    string str;
    cin >> str;
    vector<ll> v;
    ll cnt = 1;
    for(ll i = 1 ; i < n ; i++)
    {
        if(str[i] == str[i - 1])
        {
            cnt++;
        }
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }
    }
    v.push_back(cnt);
    ll minstep = 0;
    for(ll i = 0 ; i < v.size() ; i++)
    {
        if(v[i] % 2 == 1)
        {
            minstep++;
            v[i + 1] = v[i + 1] - 1;
        }
    }
    cout << minstep << endl;
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