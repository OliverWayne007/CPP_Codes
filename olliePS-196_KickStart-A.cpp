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
        string os , ps;
        cin >> os >> ps;
        ll ol = os.length() , pl = ps.length();
        if(ol > pl)
        {
            cout << "Case #" << i << ": " << "IMPOSSIBLE" << endl;
        }
        else
        {
            unordered_map<char , ll> mp , mpp;
            unordered_set<char> st;
            for(ll j = 0 ; j < ol ; j++)
            {
                mp[os[j]]++;
                st.insert(os[j]);
            }
            for(ll j = 0 ; j < pl ; j++)
            {
                mpp[ps[j]]++;
            }
            bool check = true;
            ll cnt = 0 , dcc = 0;
            for(auto it : st)
            {
                if(mp[it] > mpp[it])
                {
                    check = false;
                    break;
                }
                dcc += mpp[it];
                cnt += mpp[it] - mp[it];
            }
            if(check == false)
            {
                cout << "Case #" << i << ": " << "IMPOSSIBLE" << endl;
            }
            else
            {
                cout << "Case #" << i << ": " << cnt + (pl - dcc) << endl;
            }
        }
    }
    return 0;
}