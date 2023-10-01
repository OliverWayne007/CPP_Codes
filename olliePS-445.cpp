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
    vector<vector<ll>> vec;
    for(ll i = 1 ; i <= n ; i++)
    {
        vector<ll> v;
        for(ll j = 1 ; j < n ; j++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        vec.push_back(v);
    }
    ll missing;
    vector<ll> temp;
    for(ll i = 0 ; i <= n ; i++)
    {
        temp.push_back(i);
    }
    for(auto it : vec[0])
    {
        temp[it] = 0;
    }
    for(auto it : temp)
    {
        if(it != 0)
        {
            missing = it;
            break;
        }
    }
    set<ll> st;
    for(ll i = 1 ; i < n ; i++)
    {
        for(ll j = 0 ; j < n - 1 ; j++)
        {
            if(vec[i][j] != missing)
            {
                st.insert(vec[i][j]);
            }
            else
            {
                break;
            }
        }
    }
    ll idx = n - 1;
    for(ll i = 0 ; i < n - 1 ; i++)
    {
        if(!st.empty())
        {
            cout << vec[0][i] << " ";
            st.erase(vec[0][i]);
        }
        else
        {
            cout << missing << " ";
            idx = i;
            break;
        }
    }
    if(idx == n - 1)
    {
        cout << missing << endl;
        return;
    }
    for(ll i = idx ; i < n - 1 ; i++)
    {
        cout << vec[0][i] << " ";
    }
    cout << endl;
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