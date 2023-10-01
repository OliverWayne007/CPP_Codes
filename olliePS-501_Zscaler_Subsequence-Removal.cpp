#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Subsequence removal
// Given an array of positive number ,find the min len of increasing subsequences such that after removing this subsequence from array,
// the array contains remaining unique element
// if it is not possible return -1 then.
// Ex: n=7 arr=[1,2,1,3,1,4,5,2,4] for this output will be [1,1,2,4]

vector<int> findSubsequenceLength(vector<int>& arr , int n)
{
   set<int> st;
   vector<int> repeatedElements;
   for(auto it : arr)
   {
      if(st.count(it) == 0)
      {
         st.insert(it);
      }
      else
      {
         repeatedElements.push_back(it);
      }
   }
   int len = repeatedElements.size();
   if(len == 0 || len == 1)
   {
      return repeatedElements;
   }
   for(int i = 1 ; i < len ; i++)
   {
      if(repeatedElements[i] < repeatedElements[i - 1])
      {
         return {-1};
      }
   }
   return repeatedElements;
}

void Solution(ll T)
{
   int n;
   cout << "Enter the size of the array: ";
   cin >> n;
   vector<int> arr(n);
   cout << "Enter the elements of the array: " << endl;
   for(int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   vector<int> ans = findSubsequenceLength(arr , n);
   for(auto it : ans)
   {
      cout << it << " ";
   }
   cout << endl;
   return;
}

int main()
{
   //flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}