#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    ll n;
    cin >> n;
    string s , t;
    cin >> s >> t;
    vector<ll> s_a , s_c , t_a , t_c;
    for(ll i = 0 ; i < n ; i++)
    {
        if(s[i] == 'a')
        {
            s_a.push_back(i);
        }
        if(s[i] == 'c')
        {
            s_c.push_back(i);
        }
        if(t[i] == 'a')
        {
            t_a.push_back(i);
        }
        if(t[i] == 'c')
        {
            t_c.push_back(i);
        }
    }
    if(s_a.size() != t_a.size() || s_c.size() != t_c.size())
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for(ll i = 0 ; i < s_a.size() ; i++)
        {
            if(s_a[i] > t_a[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
        for(ll i = 0 ; i < s_c.size() ; i++)
        {
            if(s_c[i] < t_c[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
        string rs = "" , rt = "";
        for(ll i = 0 ; i < n ; i++)
        {
            if(s[i] == 'b')
            {
                continue;
            }
            else
            {
                rs.push_back(s[i]);
            }
        }
        for(ll i = 0 ; i < n ; i++)
        {
            if(t[i] == 'b')
            {
                continue;
            }
            else
            {
                rt.push_back(t[i]);
            }
        }
        if(rs != rt)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
    }
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
      solution();
   }
   return 0;
}