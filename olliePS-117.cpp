#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    ll cl = 0 , ml = 1 , ce = 0;
    for(ll i = 0 ; i<n ; i++)
    {
        ll x;
        cin >> x;
        if(ce < x)
        {
            ce = x;
            cl++;
            ml = max(cl , ml);
        }
        else
        {
            ce = x;
            cl = 1;
        }
    }
    cout << ml << endl;
    return 0;
}