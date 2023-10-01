#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll d;
    cin >> d;
    if(d % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 0 << " " << 0 << endl;
        cout << d << " " << 0 << endl;
        cout << d/2 << " " << d/2 << endl;
        cout << d/2 << " " << -d/2 << endl;
    }
    return 0;
}