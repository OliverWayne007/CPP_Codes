#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    double tq = 100*n;
    double oq = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
        double p;
        cin >> p;
        oq = oq + p;
    }
    double foq = (oq*100)/tq;
    cout << fixed << setprecision(12) << foq << endl;
    return 0;
}