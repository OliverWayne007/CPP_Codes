#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n , m;
    cin >> n >> m;
    vector<ll> v;
    for(ll i = 1 ; i <= m ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    ll i = 0 , j = n-1 , mini = INT_MAX;
    while(j <= m-1)
    {
        mini = min(v[j]-v[i] , mini);
        i++;
        j++;
    }
    cout << mini << endl;
    return 0;
}