#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Maximum sum subarray with atmost K elements CSES

ll getMaxProfit(vector<int>& nums , int k)
{
}

void Solution(ll T)
{
   int k , n;
   cout << "Enter the value of k: ";
   cin >> k;
   cout << "Enter the number of elements in the array: ";
   cin >> n;
   vector<int> nums;
   for(int i = 0 ; i < n ; i++)
   {
      int x;
      cin >> x;
      nums.push_back(x);
   }
   ll ans = getMaxProfit(nums , k);
   cout << ans << endl;
   return;
}

int main()
{
   // flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}