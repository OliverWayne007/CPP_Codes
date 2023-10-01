#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    ll cm = 0 , cc = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll m , c;
        cin >> m >> c;
        if(m > c)
        {
            cm++;
        }
        else if(m < c)
        {
            cc++;
        }
        else
        {
            cm++;
            cc++;
        }
    }
    if(cm > cc)
    {
        cout << "Mishka" << endl;
    }
    else if(cm < cc)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}