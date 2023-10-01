#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
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
        if(2 * min(a , b) >= max(a , b))
        {
            cout << 4 * min(a , b) * min(a , b) << endl;
        }
        else
        {
            cout << max(a , b) * max(a , b) << endl;
        }
    }
    return 0;
}