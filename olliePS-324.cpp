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
    vector<string> vs;
    map<string , ll> mp;
    for(ll i = 1 ; i <= n ; i++)
    {
        string str;
        cin >> str;
        vs.push_back(str);
        mp[str]++;
    }
    for(ll i = 0 ; i < n ; i++)
    {
        string s = vs[i];
        string st = "";
        bool found = false;
        while(s.length() > 0)
        {
            st.push_back(s[s.length() - 1]);
            reverse(st.begin() , st.end());
            s.pop_back();
            if(mp.find(s) != mp.end() && mp.find(st) != mp.end())
            {
                found = true;
                reverse(st.begin() , st.end());
                break;
            }
            reverse(st.begin() , st.end());
        }
        if(found == false)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    cout << endl;
    return;
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