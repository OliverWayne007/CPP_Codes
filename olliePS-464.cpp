#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

ll MaxSum(vector<ll>& v , ll idx)
{
   if(idx == 0)
   {
      return max((ll)0 , v[idx]);
   }
   ll ans = max(0ll , v[idx]) + MaxSum(v , idx - 1);
   return ans;
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
   ll ans = MaxSum(v , n - 1);
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