#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll a , b;
        cin >> a >> b;
        if(abs(a - b) == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll diff = abs(a - b);
            if(diff % 10 == 0)
            {
                cout << diff/10 << endl;
            }
            else
            {
                cout << (diff/10) + 1 << endl;
            }
        }
    }
    return 0;
}