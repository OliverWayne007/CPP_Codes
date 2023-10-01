#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Maximum frequencies in each M-length subarray ------> O(n) solution

void Solution(ll T)
{
    int n , m;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0 ; i < n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans;
    map<int , int> mp;
    int count = 0 , mx = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(i - m >= 0)
        {
            mp[v[i - m]]--;
            count -= 1;
            if(mp[v[i - m]] == 0)
            {
                mp.erase(v[i - m]);
            }
        }
        mp[v[i]]++;
        count += 1;
        // mx = max(mx , mp[v[i]]);
        if(count % m == 0)
        {
            for(auto it : mp)
            {
                mx = max(mx , it.second);
            }
            ans.push_back(mx);
        }
        mx = 0;
    }
    for(auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}