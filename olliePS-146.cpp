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
        string str;
        cin >> str;
        ll st = 0 , en = 1 , cnt = 0;
        while(en < n)
        {
            if(str[st] != str[en])
            {
                cnt++;
            }
            st++;
            en++;
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}