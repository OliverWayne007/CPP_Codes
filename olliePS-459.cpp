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
    vector<int> v = {1 , 2 , 3 , 4 , 5};
    for(auto it : v)
    {
        it += 1;
    }
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    for(auto &it : v)
    {
        it++;
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
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}