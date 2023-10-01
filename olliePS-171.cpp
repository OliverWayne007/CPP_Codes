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
        double n;
        cin >> n;
        vector<double> wx , yz , aps;
        for(double j = 1 ; j <= n ; j++)
        {
            for(double k = 1 ; k <= n ; k++)
            {
                wx.push_back(j/k);
                yz.push_back(j/k);
            }
        }
        for(double j = 0 ; j < wx.size() ; j++)
        {
            for(double k = 0 ; k < yz.size() ; k++)
            {
                aps.push_back(wx[j] + yz[k]);
            }
        }
        ll cnt = 0;
        for(ll j = 0 ; j < aps.size() ; j++)
        {
            if(floor(aps[j]) == ceil(aps[j]))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}