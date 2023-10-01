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
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;
    int* arr = new int[n];
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "The elements of the array are: " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
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
      cout << endl;
      Solution(t);
      cout << endl;
      t++;        
   }
   return 0;
}