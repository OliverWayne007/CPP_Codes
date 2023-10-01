#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        double x1 , x2 , y1 , y2;
        cin >> x1 >> x2 >> y1 >> y2;
        if(y1/x1 > y2/x2)
        {
            cout << 1 << endl;
        }
        else if(y1/x1 == y2/x2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}