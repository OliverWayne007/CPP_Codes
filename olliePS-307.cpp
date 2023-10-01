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
    string keyboard , word;
    cin >> keyboard >> word;
    ll n = word.length();
    map<char , int> mp;
    for(ll i = 0 ; i < 26 ; i++)
    {
        mp[keyboard[i]] = i;
    }
    string str = "";
    for(ll i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            str.push_back(word[i]);
        }
        else
        {
            if(str[i] == str[i - 1])
            {
                continue;
            }
            else
            {
                str.push_back(word[i]);
            }
        }
    }
    if(str.length() == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll time = 0;
    for(ll i = 1 ; i < str.length() ; i++)
    {
        time += abs(mp[str[i]] - mp[str[i - 1]]);
    }
    cout << time << endl;
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