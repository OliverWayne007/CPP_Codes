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
        ll n , k;
        cin >> n >> k;
        string str;
        cin >> str;
        unordered_map<char , ll> mp;
        for(ll j = 0 ; j < str.length() ; j++)
        {
            mp[str[j]]++;
        }
        ll sop = 0 , oc = 0;
        for(auto it : mp)
        {
            if(it.second % 2 == 0)
            {
                sop += it.second;
            }
            else
            {
                oc++;
                sop += it.second - 1;
            }
        }
        if(oc != 0)
        {
            sop += 1;
            oc--;
        }
        if(sop == 1)
        {
            cout << 1 << endl;
        }
        else if(sop <= k)
        {
            cout << 1 << endl;
        }
        else
        {
            if((sop/k) % 2 == 0)
            {
                if(oc >= k - (sop % k))
                {
                    cout << sop/k + 1 << endl;
                }
                else
                {
                    cout << sop/k << endl;
                }
            }
            else
            {
                cout << sop/k << endl;
            }
        }
    }
    return 0;
}