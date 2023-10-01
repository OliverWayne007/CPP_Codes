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
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        string str , s;
        cin >> str >> s;
        ll osl = str.length();
        ll psl = s.length();
        ll k = 0 , j = 0;
        while(k < osl && j < psl)
        {
            if(str[k] == s[j])
            {
                k++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if(k == osl)
        {
            cout << "Case #" << i << ": " << psl - osl << endl;
        }
        else
        {
            cout << "Case #" << i << ": " << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}