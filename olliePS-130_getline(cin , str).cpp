#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    string str;
    getline(cin , str);
    ll n = str.length();
    unordered_set<char> st;
    for(ll i = 1 ; i < n-1 ; i += 3)
    {
        st.insert(str[i]);
    }
    cout << st.size() << endl;
    return 0;
}