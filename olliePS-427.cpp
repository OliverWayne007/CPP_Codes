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
   ll n , k;
   cin >> k >> n;
   vector<ll> sequence;
   ll prev , curr = 1 , diff = 1;
   while(curr <= n && k - sequence.size() - 1 >= 0 && k - sequence.size() - 1 <= n - curr)
   {
      sequence.push_back(curr);
      prev = curr;
      curr = prev + diff;
      diff += 1;
   }
   if(sequence.size() < k)
   {
      ll num = sequence[sequence.size() - 1] + 1;
      while(k - sequence.size() > 0)
      {
         sequence.push_back(num);
         num++;
      }
   }
   for(auto it : sequence)
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
      Solution(t);
      t++;        
   }
   return 0;
}