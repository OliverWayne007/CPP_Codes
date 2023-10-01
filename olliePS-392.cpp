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
    char arr[8][8];
    for(ll row = 0 ; row < 8 ; row++)
    {
        for(ll col = 0 ; col < 8 ; col++)
        {
            cin >> arr[row][col];
        }
    }
    for(ll row = 0 ; row < 8 ; row++)
    {
        ll rc = 0;
        for(ll col = 0 ; col < 8 ; col++)
        {
            if(arr[row][col] == 'R')
            {
                rc++;
            }
        }
        if(rc == 8)
        {
            cout << "R" << endl;
            return;
        }
    }
    cout << "B" << endl;
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
      cout << endl;
      t++;        
   }
   return 0;
}