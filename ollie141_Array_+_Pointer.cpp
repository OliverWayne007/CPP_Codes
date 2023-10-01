#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
   int arr[] = {1 , 2 , 3 , 4 , 5};
   cout << arr << endl;                 // arr contains the address of the first element of the array arr

   for(int i = 0 ; i < 5 ; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   int *ptr = arr;                     // ptr also contains the address of the first element of the array arr
   cout << ptr << endl;

   for(int i = 0 ; i < 5 ; i++)
   {
      cout << ptr[i] << " ";
   }
   cout << endl;

   // NOTE: Both arr as well as ptr are pointing to the same array arr

   // Changing the first element of the array arr through ptr
   ptr[0] = 10;

   // Printing the elements of the array arr
   for(auto it : arr)
   {
      cout << it << " ";
   } 
   cout << endl;
   
}

int main()
{
   flash();
   ll tc = 1;
   // cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}