#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
const long long int MOD = 1e9 + 7;
const long long int MAX = 1e9;
const long long int INF = 1e18;

int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll x , y;
        cin >> x >> y;
        ll cnt = 1;
        while(cnt <= y)
        {
            x++;
            cnt++;
        }
        if(x % 2 == 0)
        {
            cout << "janmansh" << endl;
        }
        else
        {
            cout << "jay" << endl;
        }
    }
    return 0;
}