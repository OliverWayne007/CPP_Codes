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
    ll sum = 0;
    for(ll i = n - 1 ; i >= 0 ; --i)
    {
        if(str[i] == 'Q' && sum <= 0)
        {
            cout << "No" << endl;
            return;
        }
        else if(str[i] == 'Q' && sum > 0)
        {
            sum--;
        }
        else
        {
            sum++;
        }
    }
    cout << "Yes" << endl;
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