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
    ll l1 , r1 , l2 , r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1 == l2)
    {
        cout << l1 << endl;
        return;
    }
    else
    {
        if(l1 > l2 && r2 >= l1)
        {
            cout << l1 << endl;
            return;
        }
        else if(l1 > l2 && r2 < l1)
        {
            cout << l1 + l2 << endl;
            return;
        }
        else if(l1 < l2 && r1 >= l2)
        {
            cout << l2 << endl;
            return;
        }
        else
        {
            cout << l1 + l2 << endl;
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