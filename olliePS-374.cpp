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
    string ans = "";
    if(n <= 2)
    {
        ans += 'W';
        cout << ans << endl;
        return;
    }
    ll curr = 0;
    while(curr < n - 1)
    {
        if(str[curr + 1] == '*')
        {
            ans += 'J';
            curr += 1;
            while(str[curr] == '*')
            {
                curr++;
            }
            continue;
        }
        if(str[curr + 1] == '_')
        {
            ans += 'W';
            curr++;
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}