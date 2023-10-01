#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    string str;
    cin >> str;
    if(n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        unordered_set<char> st;
        for(ll i = 0 ; i < n ; i++)
        {
            if(str[i] < 'a')
            {
                st.insert((char)('a' + (str[i] - 'A')));
            }
            else
            {
                st.insert(str[i]);
            }
        }
        if(st.size() < 26)
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