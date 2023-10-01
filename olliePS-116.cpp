#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll n,s;
        cin >> n >> s;
        int idx;
        if(n%2 == 0)
        {
            idx = n/2;
        }
        else
        {
            idx = n/2 + 1;
        }
        ll num = (n - idx) + 1;
        cout << (s/num) << endl;
    }
    return 0;
}