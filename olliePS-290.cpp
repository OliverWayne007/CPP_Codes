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
    ll row , col , pc = 0 , cnt = 0;
    char arr[8][8];
    for(ll i = 0 ; i < 8 ; i++)
    {
        ll cc = 0;
        for(ll j = 0 ; j < 8 ; j++)
        {
            cin >> arr[i][j];
            char x = arr[i][j];
            if(x == '#')
            {
                cc++;
            }
        }
        if(pc == 2 && cc == 1 && cnt == 0)
        {
            row = i;
            cnt++;
        }
        pc = cc;
    }
    for(ll i = 0 ; i < 8 ; i++)
    {
        if(arr[row][i] == '#')
        {
            col = i;
            break;
        }
    }
    cout << (row + 1) << " " << (col + 1) << endl;
    return;
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
       cout << endl;
       solution();
   }
   return 0;
}