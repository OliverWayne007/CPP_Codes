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
    ll x0 , n;
    cin >> x0 >> n;
    if(n % 4 == 0)
    {
        cout << x0 << endl;
        return;
    }
    else
    {
        ll jump_len = (n/4) * 4;
        if(abs(x0) % 2 == 0)
        {
            if(n % 4 == 1)
            {
                cout << (x0 - jump_len - 1) << endl;
            }
            else if(n % 4 == 2)
            {
                cout << (x0 + 1) << endl;
            }
            else
            {
                cout << (x0 + jump_len + 4) << endl;
            }
            return;
        }
        else
        {
            if(n % 4 == 1)
            {
                cout << (x0 + jump_len + 1) << endl;
            }
            else if(n % 4 == 2)
            {
                cout << (x0 - 1) << endl;
            }
            else
            {
                cout << (x0 - jump_len - 4) << endl;
            }
            return;
        }
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