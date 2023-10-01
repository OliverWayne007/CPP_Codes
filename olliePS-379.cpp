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
    string str;
    cin >> str;
    ll n = str.size();
    char st = str[0] , en = str[n - 1];
    vector<pair<char , ll>> vp;
    for(ll i = 0 ; i < n ; i++)
    {
        vp.push_back({str[i] , i + 1});
    }
    ll start , end;
    if(st <= en)
    {
        sort(vp.begin() , vp.end());
        for(ll i = 0 ; i < n ; i++)
        {
            if(vp[i].first == st)
            {
                start = i;
                break;
            }
        }
        for(ll i = n - 1 ; i >= 0 ; i--)
        {
            if(vp[i].first == en)
            {
                end = i;
                break;
            }
        }
    }
    else
    {
        sort(vp.begin() , vp.end() , greater<pair<char , ll>>());
        for(ll i = 0 ; i < n ; i++)
        {
            if(vp[i].first == st)
            {
                start = i;
                break;
            }
        }
        for(ll i = n - 1 ; i >= 0 ; i--)
        {
            if(vp[i].first == en)
            {
                end = i;
                break;
            }
        }
    }
    cout << abs(en - st) << " " << (end - start + 1) << endl;
    cout << 1 << " ";
    for(ll i = start ; i <= end ; i++)
    {
        if(vp[i].second == 1 || vp[i].second == n)
        {
            continue;
        }
        else
        {
            cout << vp[i].second << " ";
        }
    }
    cout << n << endl;
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