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
        string str , s;
        cin >> str;
        s = str;
        reverse(s.begin() , s.end());
        ll n = 0 , m = 0 , cnt = 0;
        while(n < str.size())
        {
            if(str[n] == s[m])
            {
                n++;
                m++;
            }
            else
            {
                cnt++;
                n++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}