#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n , m;
    cin >> n >> m;
    ll ce = 1 , mc = 0;
    for(ll i = 1 ; i <= m ; i++)
    {
        ll x;
        cin >> x;
        if(x >= ce)
        {
            mc += (x-ce);
        }
        else
        {
            mc += (n-ce) + x;
        }

        ce = x;
    }
    cout << mc << endl;
    return 0;
}