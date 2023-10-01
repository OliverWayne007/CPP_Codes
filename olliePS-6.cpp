#include<bits/stdc++.h>
using namespace std;
// BRUTE-FORCE APPROACH !!!
int divide(int x , int count)
{
    if(x%2 != 0)
    {
        return count;
    }
    else
    {
    x = x/2;
    count = count + 1;
    divide(x , count);
    }
}

int main()
{
   int t;
   cin>>t;
   for(int i = 1 ; i<=t ; i++)
   {
      int n;
      cin>>n;
      int arr[n];
      for(int i = 0 ; i<n ; i++)
      {
          cin>>arr[i];
      }
      bool check = true;
      for(int i = 0 ; i<n ; i++)
      {
         if(arr[i]%2 != 0)
         {
             check = false;
             break;
         }
         else
         {
             continue;
         }
      }
      if(check == false)
      {
          cout<<0<<endl;
      }
      else
      {
          int mincount = INT_MAX;
          for(int i = 0 ; i<n ; i++)
          {
             int num = divide(arr[i] , 0);
             mincount = min(mincount , num);
          }
          cout<<mincount<<endl;
      }
   }
   return 0;
}