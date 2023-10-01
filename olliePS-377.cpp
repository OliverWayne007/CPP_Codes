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
    ll idx = n - 1;
    string ans = "";
    while(idx >= 0)
    {
        if(str[idx] != '0')
        {
            ll x = str[idx] - '0';
            ans += (char)(96 + x);
            idx--;
        }
        else
        {
            string s = "";
            s += str[idx - 2];
            s += str[idx - 1];
            ll x = stoi(s);
            ans += (char)(96 + x);
            idx -= 3;
        }
    }
    reverse(ans.begin() , ans.end());
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