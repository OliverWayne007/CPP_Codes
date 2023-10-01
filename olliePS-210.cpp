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
    ll n;
    cin >> n;
    if(n % 3 == 0)
    {
        for(ll i = 1 ; i <= n/3 ; i++)
        {
            cout << "21";
        }
    }
    else
    {
        if(n % 3 == 2)
        {
            for(ll i = 1 ; i <= n/3 ; i++)
            {
                cout << "21";
            }
            cout << "2";
        }
        else
        {
            for(ll i = 1 ; i <= n/3 ; i++)
            {
                cout << "12";
            }
            cout << "1";
        }
    }
    cout << endl;
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
    return 0;
}