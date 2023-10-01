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
    ll x , y;
    cin >> x >> y;
    ll op1 = (1000 - (4 * (x + y))) + (500 - (2 * x));
    ll op2 = (1000 - (4 * y)) + (500 - (2 * (x + y)));
    cout << max(op1 , op2) << endl;
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