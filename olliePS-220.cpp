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
    string str;
    cin >> str;
    vector<char> v;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == '1')
        {
            v.push_back(i);
        }
    }
    if(v.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    if(v.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll cnt = 0;
    for(ll i = 1 ; i < v.size() ; i++)
    {
        if(v[i] - v[i-1] > 1)
        {
            cnt++;
        }
    }
    if(cnt+1 == v.size())
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        cout << 2 << endl;
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