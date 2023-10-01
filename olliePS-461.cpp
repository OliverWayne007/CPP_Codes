#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Find the last occurrence of an element in a duplicated sorted array

ll BinarySearch(vector<ll>& v , ll n , ll ele)
{
    ll st = 0 , en = n - 1 , idx = -1;
    while(st <= en)
    {
        ll mid = (st + en)/2;
        if(v[mid] == ele)
        {
            idx = mid;
            st = mid + 1;
        }
        else if(v[mid] < ele)
        {
            st = mid + 1;
        }
        else
        {
            en = mid - 1;
        }
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
    cout << "Enter the element to be searched: ";
    cin >> ele;
    ll ans = BinarySearch(v , n , ele);
    cout << "The last index of the occurrence of " << ele << " is : " << ans << endl;
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