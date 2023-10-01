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
    if(n % 3 == 2)
    {
        cout << "NO" << endl;
        return;
    }
    for(ll i = 0 ; i < n ; i++)
    {
        if((i + 1) % 3 == 1 || (i + 1) % 3 == 0)
        {
            continue;
        }
        if((i + 1) % 3 == 2)
        {
            if(str[i] == str[i + 1])
            {
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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