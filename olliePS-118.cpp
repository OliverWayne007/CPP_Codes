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
        ll n , h;
        cin >> n >> h;
        vector<ll> v(n);
        for(ll j = 0 ; j < n ; j++)
        {
            cin >> v[j];
        }
        vector<ll> :: iterator it;
        it = max_element(v.begin() , v.end());
        ll me = *it , nme;
        if(it == v.end()-1)
        {
            nme = *max_element(v.begin() , it);
        }
        else if(it == v.begin())
        {
            nme = *max_element(it+1 , v.end());
        }
        else
        {
            nme = max(*max_element(v.begin() , it) , *max_element(it+1 , v.end()));
        }

        ll s = me + nme;
        if( h % s == 0 )
        {
            cout << 2*(h/s) << endl;
        }
        else
        {
            if( h % s <= me)
            {
                cout << 2*(h/s) + 1 << endl;
            }
            else
            {
                cout << 2*(h/s) + 2 << endl;
            }
        }
    }
    return 0;
}