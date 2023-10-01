#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    ll ml = 1 , cl = 0 , ce = INT_MIN ;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        if(ce <= x)
        {
            ce = x;
            cl++;
            ml = max(ml , cl);
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