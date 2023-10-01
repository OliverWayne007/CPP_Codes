#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    unordered_set<ll> st;
    ll lx , ly;
    cin >> lx;
    for(ll i = 1 ; i <= lx ; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    cin >> ly;
    for(ll i = 1 ; i <= ly ; i++)
    {
        ll y;
        cin >> y;
        st.insert(y);
    }
    if(st.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}