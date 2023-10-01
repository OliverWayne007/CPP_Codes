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
    ll n , d;
    cin >> n >> d;
    string str;
    cin >> str;
    ll idx = -1;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] - '0' < d)
        {
            idx = i;
            break;
        }
    }
    if(idx == -1)
    {
        cout << str << d << endl;
        return;
    }
    for(ll i = 0 ; i < idx ; i++)
    {
        cout << str[i];
    }
    cout << d;
    for(ll i = idx ; i < n ; i++)
    {
        cout << str[i];
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