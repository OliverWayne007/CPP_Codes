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
    for(ll i = 0 ; i < n ; i++)
    {
        if(i != n - 1 && str[i] == 'n' && str[i + 1] == 'a')
        {
            ans += "nya";
            i++;
        }
        else
        {
            ans.push_back(str[i]);
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