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
    ll cnts = 0 , cntl = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        string str;
        cin >> str;
        if(str[0] == 'S')
        {
            cnts++;
        }
        else
        {
            cntl++;
        }
    }
    cout << cnts << " " << cntl << endl;
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