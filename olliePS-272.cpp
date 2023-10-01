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
    char arr[5] = {'a' , 'e' , 'i' , 'o' , 'u'};
    map<int , char> mp;
    for(ll i = 0 ; i < 5 ; i++)
    {
        mp[arr[i] - 'a'] = arr[i];
    }
    ll perm = 1;
    for(ll i = 0 ; i < n ; i++)
    {
        int cnt = 0;
        int mn = INT_MAX;
        for(ll j = 0 ; j < 5 ; j++)
        {
            int x = str[i] - 'a' , y = arr[j] - 'a';
            mn = min(mn , abs(x - y));
        }
        int num = str[i] - 'a';
        if(mn == 0)
        {
            continue;
        }
        if(mp.find(num + mn) != mp.end())
        {
            cnt++;
        }
        if(mp.find(num - mn) != mp.end())
        {
            cnt++;
        }
        perm = (perm * cnt) % MOD;
    }
    cout << perm % MOD << endl;
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