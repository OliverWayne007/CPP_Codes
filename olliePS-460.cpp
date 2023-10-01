#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Find the first occurrence of a number using binary search

ll BinarySearch(vector<ll>& v , int n , int ele)
{
   ll st = 0 , en = n - 1 , idx = n;
   while(st <= en)
   {
      ll mid = (st + en)/2;
      if(v[mid] > ele)
      {
         en = mid - 1;
      }
      else if(v[mid] < ele)
      {
         st = mid + 1;
      }
      else
      {
         idx = min(idx , mid);
         en = mid - 1;
      }
   }
   if(idx == n)
   {
      return -1;
   }
   return idx;
}

void Solution(ll T)
{
   ll n , ele;
   cout << "Enter the size of the array: ";
   cin >> n;
   cout << "Enter the element to be searched: ";
   cin >> ele;
   cout << "Enter the array: " << endl;
   vector<ll> v;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
   }
   ll ans = BinarySearch(v , n , ele);
   cout << "The first occurrence of the element " << ele << " is at index : " << ans << endl;
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