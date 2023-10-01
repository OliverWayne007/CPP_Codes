#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Given an integer array(including positive integers  , negative integers as well as zero). Pick a subsequenece of elements 
// from it such that no two picked elements are adjacent and the sum of all the picked elements is maximum possible.

ll MaxSum(vector<ll>& v , ll n , ll idx , vector<ll>& dp)
{
   if(idx >= n)
   {
      return 0;
   }
   if(dp[idx] != -1)
   {
      return dp[idx];
   }
   ll ans = 0;
   if(v[idx] <= 0)
   {
      ans = MaxSum(v , n , idx + 1 , dp);
   }
   else
   {
      ll pick = v[idx] + MaxSum(v , n , idx + 2 , dp);
      ll not_pick = MaxSum(v , n , idx + 1 , dp);
      ans = max(pick , not_pick);
   }
   return dp[idx] = ans;
}

void Solution(ll T)
{
   ll n;
   cout << "Enter the number of elements of the array: ";
   cin >> n;
   cout << "Enter the elements the integer array: " << endl;
   vector<ll> v;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
   }
   ll mxe = *max_element(v.begin() , v.end());
   ll mne = *min_element(v.begin() , v.end());
   if(mxe < 0)
   {
      cout << mxe << endl;
      return;
   }
   vector<ll> dp(n , -1);
   ll ans = MaxSum(v , n , 0 , dp);
   cout << ans << endl;
   return;
}

int main()
{
   //flash();
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