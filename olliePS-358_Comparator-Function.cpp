#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

static bool cmp(pair<int , int> p1 , pair<int , int> p2)
{
    if(p1.first < p2.first)
    {
        return false;
    }
    if(p1.first > p2.first)
    {
        return true;
    }
    if(p1.second < p2.second)
    {
        return true;
    }
    return false;
}

void solution(ll T)
{
    vector<pair<int , int>> v;
    for(int i = 1 ; i <= 10 ; i++)
    {
        ll x;
        cin >> x;
        v.push_back({x , i});
    }
    sort(v.begin() , v.end() , cmp);
    for(auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
    return;
}

int main()
{
   flash();
   ll tc = 1;
   //cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      solution(t);
      t++;        
   }
   return 0;
}