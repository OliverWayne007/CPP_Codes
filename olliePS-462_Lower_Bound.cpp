#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Find the lower-bound of an element using Binary Search

ll BinarySearch(vector<ll>& v , ll n , ll ele)
{
   ll st = 0 , en = n - 1 , idx = n;
   while(st <= en)
   {
      ll mid = (st + en)/2;
      if(v[mid] < ele)
      {
         st = mid + 1;
      }
      else
      {
         idx = mid;
         en = mid - 1;
      }
   }
   if(idx == n)
   {
      return idx;
   }
   return idx;
}

void Solution(ll T)
{
   ll n , ele;
   cout << "Enter the number of elements in the array: ";
   cin >> n;
   cout << "Enter the elements of the array: " << endl;
   vector<ll> v;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
   }
   cout << "Enter the element whose lower-bound is to be searched: ";
   cin >> ele;
   ll ans = BinarySearch(v , n , ele);
   if(ans == n)
   {
      cout << "No Lower-Bound of the given element exists in the array !!!" << endl;
      return;
   }
   cout << "The lower-bound of " << ele << " is : " << v[ans] << " at index : " << ans << endl;
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