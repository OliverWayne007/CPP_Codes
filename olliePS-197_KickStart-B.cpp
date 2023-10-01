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
        string str;
        cin >> str;
        ll ds = 0;
        for(char it : str)
        {
            ds += it - '0';
        }
        if(ds % 9 == 0)
        {
            cout << "Case #" << i << ": " << str[0] << 0;
            for(ll j = 1 ; j < str.length() ; j++)
            {
                cout << str[j];
            }
            cout << endl;
        }
        else
        {
            ll nd = 9 - (ds % 9);
            ll idx = -1;
            for(ll j = 0 ; j < str.size() ; j++)
            {
                if(str[j] - '0' <= nd)
                {
                    continue;
                }
                else
                {
                    idx = j;
                    break;
                }
            }
            if(idx == -1)
            {
                cout << "Case #" << i << ": " ;
                for(ll j = 0 ; j < str.size() ; j++)
                {
                    cout << str[j];
                }
                cout << nd << endl;
            }
            else
            {
                if(idx == 0)
                {
                    cout << "Case #" << i << ": " << nd;
                    for(ll j = 0 ; j < str.size() ; j++)
                    {
                        cout << str[j];
                    }
                    cout << endl;
                }
                else
                {
                    cout << "Case #" << i << ": " ;
                    for(ll j = 0 ; j < idx ; j++)
                    {
                        cout << str[j];
                    }
                    cout << nd;
                    for(ll j = idx ; j < str.size() ; j++)
                    {
                        cout << str[j];
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}