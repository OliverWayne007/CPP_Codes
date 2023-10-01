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
    ll ans = 0;
    for(ll i = 0 ; i < str.length() ; i++)
    {
        if(i == 0)
        {
            ans++;
        }
        else
        {
            if(str[i - 1] == str[i])
            {
                ans++;
            }
            else
            {
                ans += (i + 1);
            }
        }
    }
    cout << ans << endl;
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