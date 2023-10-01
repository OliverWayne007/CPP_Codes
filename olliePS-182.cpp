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
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        string str;
        cin >> str;
        ll n = str.length();
        char c;
        cin >> c;
        bool check = false;
        for(ll j = 0 ; j < n ; j++)
        {
            if(str[j] == c && j % 2 == 0)
            {
                check = true;
                break;
            }
        }
        if(check == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}