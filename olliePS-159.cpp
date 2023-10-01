#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        if(n % 4 == 0)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Not Good" << endl;
        }
    }
    return 0;
}