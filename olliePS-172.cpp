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
    ll n , m;
    cin >> n;
    vector<ll> v(102 , 0) , vec;
    for(ll i = 0 ; i < n ; i++)
    {
        ll x;
        cin >> x;
        v[x]++;
    }
    cin >> m;
    for(ll i = 0 ; i < m ; i++)
    {
        ll x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin() , vec.end());
    ll cnt = 0;
    for(ll i = 0 ; i < m ; i++)
    {
        if(v[vec[i] - 1] >= 1)
        {
            v[vec[i] - 1]--;
            cnt++;
        }
        else
        {
            if(v[vec[i]] >= 1)
            {
                v[vec[i]]--;
                cnt++;
            }
            else
            {
                if(v[vec[i] + 1] >= 1)
                {
                    v[vec[i] + 1]--;
                    cnt++;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}