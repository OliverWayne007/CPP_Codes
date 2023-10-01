#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n;
    cin >> n;
    unordered_map<ll , ll>mp;
    set<ll> st;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
        if(mp.find(x) == mp.end())
        {
            mp[x] = 1;
        }
        else
        {
            mp[x]++;
        }
    }
    ll mxp = 0;
    while(st.size() != 0)
    {
        vector<ll> v(100002 , INT_MIN);
        for(auto it : st)
        {
            if(mp.find(it - 1) == mp.end() && mp.find(it + 1) == mp.end())
            {
                v[it] = (it * mp[it]);
            }
            else if(mp.find(it - 1) != mp.end() && mp.find(it + 1) == mp.end())
            {
                v[it] = (it * mp[it]) - ((it - 1) * mp[it - 1]);
            }
            else if(mp.find(it - 1) == mp.end() && mp.find(it + 1) != mp.end())
            {
                v[it] = (it * mp[it]) - ((it + 1) * mp[it + 1]);
            }
            else
            {
                v[it] = (it * mp[it]) - ((it - 1) * mp[it - 1]) - ((it + 1) * mp[it + 1]);
            }
        }

        set<ll> :: iterator it1 , it2 , it3;
        vector<ll> :: iterator itr;
        itr = max_element(v.begin() , v.end());
        mxp = mxp + (itr - v.begin()) * mp[itr - v.begin()];
        if(*(itr - 1) == INT_MIN && *(itr + 1) == INT_MIN)
        {
            it1 = st.find(itr - v.begin());
            st.erase(it1);
        }
        else if(*(itr - 1) != INT_MIN && *(itr + 1) != INT_MIN)
        {
            it1 = st.find((itr - 1) - v.begin());
            it2 = st.find(itr - v.begin());
            it3 = st.find((itr + 1) - v.begin());
            st.erase(it1);
            st.erase(it2);
            st.erase(it3);
        }
        else if(*(itr - 1) != INT_MIN && *(itr + 1) == INT_MIN)
        {
            it1 = st.find((itr - 1) - v.begin());
            it2 = st.find(itr - v.begin());
            st.erase(it1);
            st.erase(it2);
        }
        else
        {
            it2 = st.find(itr - v.begin());
            it3 = st.find((itr + 1) - v.begin());
            st.erase(it2);
            st.erase(it3);
        }
    }
    cout << mxp << endl;
    return 0;
}