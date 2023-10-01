#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll oc = 0 , zc = 0;
    for(auto it : str)
    {
        if(it == '1')
        {
            oc++;
        }
        else
        {
            zc++;
        }
    }
    ll ans = oc * zc;
    ll mco = 0 , mcz = 0 , co = 0 , cz = 0;
    char prev;
    for(ll i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            if(str[i] == '1')
            {
                prev = '1';
                co++;
                mco = max(mco , co);
            }
            else
            {
                prev = '0';
                cz++;
                mcz = max(mcz , cz);
            }
        }
        else
        {
            if(str[i] == prev)
            {
                if(prev == '1')
                {
                    co++;
                    mco = max(mco , co);
                }
                else
                {
                    cz++;
                    mcz = max(mcz , cz);
                }
            }
            else
            {
                if(prev == '1')
                {
                    co = 0;
                    cz = 1;
                }
                else
                {
                    cz = 0;
                    co = 1;
                }
                prev = str[i];
                mco = max(co , mco);
                mcz = max(cz , mcz);
            }
        }
    }
    // cout << mco << " " << mcz << endl;
    ans = max(ans , max(mco , mcz) * max(mco , mcz));
    cout << ans << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}