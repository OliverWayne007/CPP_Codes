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
    ll row , col;
    cin >> row >> col;
    char arr[51][51];
    for(ll i = 0 ; i < row ; i++)
    {
        for(ll j = 0 ; j < col ; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(ll j = 0 ; j < col ; j++)
    {
        for(ll i = row-1 ; i >= 0 ; --i)
        {
            if(arr[i][j] == '.' || arr[i][j] == 'o')
            {
                continue;
            }
            else
            {
                ll k;
                for(k = i+1 ; k < row ; k++)
                {
                    if(arr[k][j] == 'o' || arr[k][j] == '*')
                    {
                        swap(arr[i][j] , arr[k-1][j]);
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                if(k == row)
                {
                    swap(arr[i][j] , arr[k-1][j]);
                }
            }
        }
    }
    for(ll i = 0 ; i < row ; i++)
    {
        for(ll j = 0 ; j < col ; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return;
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
      solution();
   }
   return 0;
}