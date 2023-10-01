#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int main()
{
    flash();
    ll i = 0;
    for( ; (ull)(1 << i) <= MAX ; i++){}
    cout << i << endl;
    ull val = (1 << i);
    cout << val << endl;
    return 0;
}