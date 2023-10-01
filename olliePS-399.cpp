#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = 0;
    stack<ll> st;
    for(auto it : v)
    {
        if(st.empty() == true)
        {
            st.push(it);
        }
        else
        {
            if(it == st.top())
            {
                st.push(it);
            }
            else
            {
                ans++;
                st.pop();
            }
        }
    }
    while(st.size() >= 2)
    {
        int ele = st.top();
        st.pop();
        if(ele == st.top())
        {
            st.pop();
            st.push(0);
        }
        else
        {
            ans++;
            st.pop();
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}