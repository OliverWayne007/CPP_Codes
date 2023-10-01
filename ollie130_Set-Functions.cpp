#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
   ll n;
   set<ll> st;
   cout << "Enter the size of the array: ";
   cin >> n;
   ll arr[n];
   cout << "Enter the elements of the array: " << endl;
   for(ll i = 0 ; i < 10 ; i++)
   {
      cin >> arr[i];
      st.insert(arr[i]);
   }
   // set<ll> :: iterator it;
   auto it = st.find(8);
   if(it == st.end())
   {
      cout << "Not Found !!!" << endl;
   }
   else
   {
      cout << "Found !!!" << endl;
   }
   cout << st.count(8) << endl;
   st.erase(8);
   cout << st.count(8) << endl;
}

int main()
{
   // flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}