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
    int n = str.length();
    if(n == 1 || n == 2)
    {
        cout << 0 << endl;
        return;
    }
    ll oc = 0 , zc = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == '1')
        {
            oc++;
        }
        else
        {
            zc++;
        }
    }
    if(oc != zc)
    {
        cout << min(oc , zc) << endl;
        return;
    }
    else
    {
        cout << (n-1)/2 << endl;
        return;
    }
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