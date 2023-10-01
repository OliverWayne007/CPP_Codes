#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll gcd(ll x , ll y)
{
    if(x == 0)
    {
        return y;
    }
    return gcd(y%x , x);
}

ll lcm(ll x , ll y)
{
    return (x * y)/gcd(x , y);
}

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll b , c;
        cin >> b >> c;
        cout << lcm(b , c)/b << endl;
    }
    return 0;
}