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
    int n;
    cin >> n;
    char arr[2][n];
    for(int row = 0 ; row < 2 ; row++)
    {
        for(int col = 0 ; col < n ; col++)
        {
            cin >> arr[row][col];
        }
    }
    int row = 0 , col = 0;
    while(col < n)
    {
        if(row == 0)
        {
            if(col == n-1)
            {
                cout << "YES" << endl;
                return;
            }
            if(arr[row][col + 1] == '0')
            {
                col += 1;
            }
            else
            {
                if(arr[row + 1][col + 1] == '0')
                {
                    row += 1;
                    col += 1;
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        else
        {
            if(col == n-1)
            {
                cout << "YES" << endl;
                return;
            }
            if(arr[row][col + 1] == '0')
            {
                col += 1;
            }
            else
            {
                if(arr[row - 1][col + 1] == '0')
                {
                    row -= 1;
                    col += 1;
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
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