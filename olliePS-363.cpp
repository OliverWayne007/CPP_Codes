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
    string s1 , s2;
    cin >> s1 >> s2;
    ll cnt1 = 0 , cnt2 = 0;
    vector<ll> v;
    for(ll i = 0 ; i < s1.size() ; i++)
    {
        if(s1[i] == 'G' || s1[i] == 'B')
        {
            cnt1++;
        }
        else
        {
            v.push_back(i);
        }
    }
    for(auto it : s2)
    {
        if(it == 'G' || it == 'B')
        {
            cnt2++;
        }
    }
    if(cnt1 != cnt2)
    {
        cout << "NO" << endl;
        return;
    }
    for(auto it : v)
    {
        if(s2[it] != 'R')
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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