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
    vector<int> stockPrice = {1 , 2 , 7 , 6 , 4 , 3 , 7};
    int k = 3;
    int n = stockPrice.size();
    int sum = 0 , mx = -1;
    map<int , int> mp;
    for(int i = 0 ; i < k ; i++)
    {
        sum += stockPrice[i];
        mp[stockPrice[i]]++;
    }
    if(mp.size() == k)
    {
        mx = max(mx , sum);
    }
    for(int i = k ; i < n ; i++)
    {
        sum -= stockPrice[i - k];
        mp[stockPrice[i - k]]--;
        if(mp[stockPrice[i - k]] == 0)
        {
            mp.erase(stockPrice[i - k]);
        }
        sum += stockPrice[i];
        mp[stockPrice[i]]++;
        if(mp.size() == k)
        {
            mx = max(mx , sum);
        }
    }
    cout << mx << endl;
    return;
}

int main()
{
   flash();
   ll t = 1;
   //cin >> t;
   while(t--)
   {
      solution();
   }
   return 0;
}