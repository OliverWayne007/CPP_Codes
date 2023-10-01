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
   // 00001 -> 00010 -> 00100 -> 01000 -> 10000
   // 0110101
   // 0100101 -> 1001010 -> 1010100 -> 1101000 -> 1110000
   // 010101 -> 101010 -> 110100 -> 111000
   // 001101 -> 010110 -> 101010 -> 110100 -> 111000
   // 000111 -> 001011 -> 010101 -> 101010 -> 110100 -> 111000
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