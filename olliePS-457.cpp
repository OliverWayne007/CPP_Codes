#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int BinSerInc(vector<int>& v)
{
   int st = 0 , en = v.size() - 1 , idx = -1;
   while(st <= en)
   {
      int mid = (st + en)/2;
      if(v[mid] == 1)
      {
         idx = mid;
         en = mid - 1;
      }
      else
      {
         st = mid + 1;
      }
   }
   return idx;
}

int BinSerDec(vector<int>& v)
{
   int st = 0 , en = v.size() - 1 , idx = -1;
   while(st <= en)
   {
      int mid = (st + en)/2;
      if(v[mid] == 1)
      {
         st = mid + 1;
      }
      else
      {
         idx = mid;
         en = mid - 1;
      }
   }
   return idx;
}

void Solution(ll T)
{
   string str;
   cout << "Enter the string: ";
   cin >> str;
   vector<int> v;
   for(auto it : str)
   {
      if(it == 'T')
      {
         v.push_back(1);
      }
      else
      {
         v.push_back(0);
      }
   }
   int ans;
   if(str[0] == 'F')
   {
      ans = BinSerInc(v);
   }
   else
   {
      ans = BinSerDec(v);
   }
   cout << ans << endl;
   return;
}

int main()
{
   // flash();
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