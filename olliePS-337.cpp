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
    if(n == 1)
    {
        cout << 2 << endl;
        return;
    }
    if(n % 3 == 0)
    {
        cout << n/3 << endl;
        return;
    }
    if(n % 3 == 2)
    {
        cout << n/3 + 1 << endl;
        return;
    }
    if(n % 3 == 1)
    {
        cout << n/3 + 1 << endl;
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