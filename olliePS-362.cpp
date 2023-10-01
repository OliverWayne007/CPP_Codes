#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n != 5)
    {
        cout << "NO" << endl;
        return;
    }
    map<char , int> mp;
    for(auto it : s)
    {
        mp[it]++;
    }
    if(mp.find('T') != mp.end() && mp.find('i') != mp.end() && mp.find('m') != mp.end() && mp.find('u') != mp.end() && mp.find('r') != mp.end())
    {
        cout << "YES" << endl;
        return;
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
      solution(t);
      t++;        
   }
   return 0;
}