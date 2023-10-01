#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    ll a , b;
    cin >> a >> b;
    if(b == 0 && a != 0)
    {
        cout << a+1 << endl;
    }
    else if(a == 0 && b != 0)
    {
        cout << 1 << endl;
    }
    else if(a == 0 && b == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << a + 2 * b + 1 << endl;
    }
}

int main()
{
    flash();
    ll t;
    cin >> t;
    while(t--)
    {
        solution();
    }
}