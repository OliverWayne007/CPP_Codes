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
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll j = 0 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        vector<ll>::iterator it1 , it2;
        it1 = max_element(v.begin(),v.end());
        it2 = min_element(v.begin(),v.end());
        ll maxrd = (v.end()-1) - it1;
        ll maxld = (it1 - v.begin());
        ll maxd = min(maxld,maxrd);
        ll minrd = (v.end()-1) - it2;
        ll minld = it2 - v.begin();
        ll mind = min(minrd,minld);
        ll mm = min(mind,maxd);
        ll sum = mm + 1;

        if(mm == mind)
        {
            if(mind == minld)
            {
                maxld = it1 - (it2 + 1);
                maxd = min(maxld,maxrd);
                sum += maxd + 1;
            }
            else if(mind == minrd)
            {
                maxrd = (it2-1) - it1;
                maxd = min(maxld,maxrd);
                sum += maxd + 1;
            }
        }
        else
        {
            if(maxd == maxld)
            {
                minld = it2 - (it1 + 1); 
                mind = min(minld,minrd);
                sum += mind + 1;
            }
            else if(maxd == maxrd)
            {
                minrd = (it1 - 1) - it2;
                mind = min(minrd,minld);
                sum += mind + 1;
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}