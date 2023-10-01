#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll x , y;
    cin >> x >> y;
    cout << (x - y) + y/2 << endl;
    return 0;
}