#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll a , b , c , d;
    cin >>a >> b >> c >> d;
    vector<ll> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin() , v.end());
    cout << v[3] - v[0] << " " << v[3] - v[1] << " " << v[3] - v[2] << endl;
    return 0;
}
