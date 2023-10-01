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
    ll num = ((2 * n) - 2);
    vector<string> vs;
    for(ll i = 1 ; i <= num ; i++)
    {
        string str;
        cin >> str;
        if(str.size() == n - 1)
        {
            vs.push_back(str);
        }
    }
    reverse(vs[0].begin() , vs[0].end());
    if(vs[0] == vs[1])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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