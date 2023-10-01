#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll k,r;
    cin >> k >> r;
    if(k % 10 == 0 || k % 10 == r)
    {
        cout << 1 << endl;
    }
    else
    {
        ll cnt = 1 , inc = k;
        while((k % 10) != 0 && (k % 10) != r)
        {
            k += inc;
            cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}