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
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll oid = -1 , zid = n;
    for(int i = 0 ; i < n ; i++)
    {
        if(str[i] == '1')
        {
            oid = i;
        }
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(str[i] == '0')
        {
            zid = i;
        }
    }
    if(oid == -1 && zid == n)
    {
        cout << n << endl;
        return;
    }
    if(oid == -1 && zid != n)
    {
        cout << zid + 1 << endl;
        return;
    }
    if(oid != -1 && zid == n)
    {
        cout << n - oid << endl;
        return;
    }
    if(oid != -1 && zid != n)
    {
        cout << zid - oid + 1 << endl;
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