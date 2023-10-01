#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
{
    ll n;
    cin >> n;
    vector<int> v;
    for(int i = 1 ; i <= n ; i++)
    {
        v.push_back(i);
    }
    if(n % 2 == 0)
    {
        for(int i = 0 ; i < n-1 ; i++)
        {
            swap(v[i] , v[i + 1]);
            i++;
        }
    }
    else
    {
        for(int i = 1 ; i < n-1 ; i++)
        {
            swap(v[i] , v[i + 1]);
            i++;
        }
    }
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      solution(t);
      t++;        
   }
   return 0;
}