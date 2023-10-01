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
    string str;
    cin >> str;
    ll n = str.length();
    ll cnt = 1 , days = 1;
    char c1 = str[0] , c2 = str[0] , c3 = str[0];
    for(ll i = 1 ; i < n ; i++)
    {
        if(str[i] == c1 || str[i] == c2 || str[i] == c3)
        {
            continue;
        }
        else
        {
            if(cnt == 1)
            {
                c2 = str[i];
                cnt++;
            }
            else if(cnt == 2)
            {
                c3 = str[i];
                cnt++;
            }
            else
            {
                c1 = str[i];
                c2 = str[i];
                c3 = str[i];
                cnt = 1;
                days++;
            }
        }
    }
    cout << days << endl;
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