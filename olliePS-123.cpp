#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    unordered_set<ll> st;
    for(ll i = 1 ; i <= 4 ; i++)
    {
        ll s;
        cin >> s;
        st.insert(s);
    }
    cout << (4 - st.size()) << endl;
    return 0;
}