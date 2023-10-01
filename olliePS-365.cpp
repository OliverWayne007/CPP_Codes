#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define pii pair<int , int>
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
{
   ll n;
   cin >> n;
   string str;
   cin >> str;
   ll sum = 0;
   vector<pii> v;
   for(ll i = 0 ; i < n ; i++)
   {
      if(i < n/2)
      {
         if(str[i] == 'L')
         {
            sum += i;
            v.push_back({i , i});
         }
         else
         {
            sum += (n - 1 - i);
         }
      }
      if(i >= n/2)
      {
         if(str[i] == 'R')
         {
            sum += n - 1 - i;
            v.push_back({n - 1 - i , i});
         }
         else
         {
            sum += i;
         }
      }
   }
   vector<ll> ans;
   sort(v.begin() , v.end());
   for(auto it : v)
   {
      if(it.second < n/2)
      {
         sum -= it.second;
         sum += n - 1 - it.second;
         ans.push_back(sum);
      }
      else
      {
         sum -= (n - 1 - it.second);
         sum += it.second;
         ans.push_back(sum);
      }
   }
   for(ll i = 0 ; i < ans.size() ; i++)
   {
      cout << ans[i] << " ";
   }
   for(ll i = ans.size() ; i < n ; i++)
   {
      cout << sum << " ";
   }
   cout << endl;
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