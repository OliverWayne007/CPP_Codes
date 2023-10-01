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
    if(n % 2 == 1)
    {
        for(ll i = 1 ; i <= n ; i++)
        {
            cout << 7 << " ";
        }
    }
    else
    {
        cout << 1 << " " << 3 << " ";
        for(ll i = 1 ; i <= n - 2 ; i++)
        {
            cout << 2 << " ";
        }
    }
    cout << endl;
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