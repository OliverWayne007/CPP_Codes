#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool isPrime(ll y)
{
    if(y == 1 || y == 0)
    {
        return false;
    }
    for(ll i = 2 ; i*i <= y ; i++)
    {
        if(y % i == 0)
        {
            return false;
        }  
    }

    return true;
}

int main()
{
    flash();
    ll n;
    cin >> n;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll x;
        cin >> x;
        ll y = sqrt(x);
        if(y*y != x)
        {
            cout << "NO" <<endl;
        }
        else
        {
            if(isPrime(y) == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}