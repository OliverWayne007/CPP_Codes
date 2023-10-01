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
    string str;
    cin >> str;
    ll n = str.length();
    ll price;
    cin >> price;
    ll sum = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        sum += (str[i] - 'a') + 1;
    }
    if(sum <= price)
    {
        cout << str << endl;
        return;
    }
    else
    {
        string s = str;
        sort(s.begin() , s.end());
        ll total = sum;
        while(total > price)
        {
            ll char_val = (s[s.length()-1] - 'a') + 1;
            total = total - char_val;
            s.pop_back();
        }
        if(s == "")
        {
            cout << s << endl;
            return;
        }
        map<char , ll> mp;
        for(auto it : s)
        {
            mp[it]++;
        }
        string ans = "";
        for(auto it : str)
        {
            if(mp.find(it) == mp.end() || mp[it] == 0)
            {
                continue;
            }
            else
            {
                ans.push_back(it);
                mp[it]--;
            }
        }
        cout << ans << endl;
        return;
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