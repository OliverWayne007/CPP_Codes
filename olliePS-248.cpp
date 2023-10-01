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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll rc = 0 , bc = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == 'W')
        {
            if((rc != 0 && bc == 0) || (rc == 0 && bc != 0))
            {
                cout << "NO" << endl;
                return;
            }
            rc = 0;
            bc = 0;
            continue;
        }
        if(str[i] == 'R')
        {
            rc++;
            continue;
        }
        if(str[i] == 'B')
        {
            bc++;
        }
    }
    if((bc == 0 && rc != 0) || (bc != 0 && rc == 0))
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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