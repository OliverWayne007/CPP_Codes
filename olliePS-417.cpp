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
    ll d = n/2;
    if(n % 2 == 0)
    {
        ll i = n/2 + 1;
        while(i <= n)
        {
            cout << i << " " << i - d << " ";
            i++;
        }
        cout << endl;
    }
    else
    {
        ll i = n/2 + 1;
        while(i < n)
        {
            cout << i << " " << i - d << " ";
            i++;
        }
        cout << n << endl;
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