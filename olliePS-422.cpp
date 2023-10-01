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
    string str;
    cin >> str;
    if(n <= 3)
    {
        cout << "NO" << endl;
        return;
    }
    map<string , ll> mp;
    string s = "";
    s.push_back(str[0]);
    s.push_back(str[1]);
    mp[s]++;
    ll idx = 2;
    while(idx <= n - 2)
    {
        string temp = "";
        temp.push_back(str[idx]);
        temp.push_back(str[idx + 1]);
        if(mp.find(temp) != mp.end())
        {
            cout << "YES" << endl;
            return;
        }
        s += str[idx];
        string tmp = "";
        tmp.push_back(s[s.size() - 2]);
        tmp.push_back(s[s.size() - 1]);
        mp[tmp]++;
        idx++;
    }
    cout << "NO" << endl;
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