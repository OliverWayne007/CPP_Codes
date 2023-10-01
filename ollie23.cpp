#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout << "Enter the size of the array: ";
   cin >> n;
   int arr[n];
   cout << "Enter the elements of the array: " << endl;
   for(int i = 0 ; i < n ; ++i)
   {
       cin >> arr[i];
   }
   
   for(int i = 1 ; i < n ; ++i)
   {
       int curr = arr[i];
       for(int j = i-1 ; j >= 0 ; --j)
       {
           if(arr[j] > curr)
           {
               arr[j+1] = arr[j];
               if(j == 0)
               {
                   arr[j] = curr;
               }
           }
           else
           {
               arr[j+1] = curr;
               break;
           }
       }
   }

   cout << "Sorted array in ascending order: " << endl;
   for(int i = 0 ; i < n ; ++i)
   {
       cout << arr[i] << " ";
   }

   cout << endl;

   return 0;
}