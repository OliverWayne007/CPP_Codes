#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll i = 0;
    while((i * nl <= k*l) && (i <= c*d) && (i * np <= p))
    {
        i++;
    }
    cout << (i-1)/n << endl;
    return 0;
}