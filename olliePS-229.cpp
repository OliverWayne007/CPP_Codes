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
    ll n , k;
    cin >> n >> k;
    if((k % 2 == 0 && n % 2 != 0) || (k % 2 != 0 && n % 2 ==  0))
    {
        cout << "NO" << endl;
        return;
    }
    if(n/k < k)
    {
        cout << "NO" <<endl;
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