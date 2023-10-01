#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        vector<ll> v(26 , 0);
        char pc = 'a';
        for(ll i = 0 ; i < n ; i++)
        {
            char ch;
            cin >> ch;
            if(v[ch - 'A'] == 0 && ch != pc)
            {
                v[ch - 'A'] = 1;
                pc = ch;
            }
            else if(v[ch - 'A'] == 1 && ch != pc)
            {
                v[ch - 'A']++;
                pc = ch;
            }
            else if(v[ch - 'A'] >= 1 && ch == pc)
            {
                continue;
            }
        }
        bool check = true;
        for(auto it : v)
        {
            if(it > 1)
            {
                check = false;
                break;
            }
        }
        if(check == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}