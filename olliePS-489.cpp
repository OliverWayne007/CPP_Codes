#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int maximumSum(vector<int>& arr) {
   int mxe = *max_element(arr.begin() , arr.end());
   if(mxe <= 0)
   {
      return mxe;
   }
   // Finding the maximum subarray sum and the starting and ending index of that subarray
   int n = arr.size() , sum = 0 , maxSum = 0 , st = -1 , en = -1 , sid , eid;
   for(int i = 0 ; i < n ; i++)
   {
      if(sum + arr[i] <= 0)
      {
         sum = 0;
         st = -1;
         en = -1;
      }
      else
      {
         sum = sum + arr[i];
         if(st == -1)
         {
            st = i;
         }
         en = i;
      }
      if(sum >= maxSum)
      {
         sid = st;
         eid = en;
      }
      maxSum = max(maxSum , sum);
   }

   cout << "sid: " << sid << endl;
   cout << "eid: " << eid << endl;

   int minimum = *min_element(arr.begin() + sid , arr.begin() + eid + 1);

   cout << "minimum: " << minimum << endl;

   int ans = maxSum - minimum;

   cout << "maxSum = " << maxSum << " , minimum = " << minimum << " , ans = " << ans << endl;

   for(int i = sid - 1 ; i >= 0 ; i--)
   {
      minimum = min(arr[i] , minimum);
      maxSum += arr[i];
      ans = max(ans , maxSum - minimum);
      cout << "maxSum = " << maxSum << " , minimum = " << minimum << " , ans = " << ans << endl;
   }
   for(int i = eid + 1 ; i < n ; i++)
   {
      minimum = min(arr[i] , minimum);
      maxSum += arr[i];
      ans = max(ans , maxSum - minimum);
      cout << "maxSum = " << maxSum << " , minimum = " << minimum << " , ans = " << ans << endl;
   }

   return ans;
}

int main()
{
   int n;
   cout << "Enter the size of the array: ";
   cin >> n;
   vector<int> arr;
   cout << "Enter the elements of the array: " << endl;
   for(int i = 0 ; i < n ; i++)
   {
      int x;
      cin >> x;
      arr.push_back(x);
   }
   int ans = maximumSum(arr);
   cout << "Ans: " << ans << endl;
   return 0;
}