#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll x;
    cin >> x;
    ll n = x , cnt = 0;
    while(n > 0)
    {
        if((n&1) == 1)
        {
            cnt++;
        }

        n = (n >> 1);
    }
    cout << cnt << endl;
    return 0;
}