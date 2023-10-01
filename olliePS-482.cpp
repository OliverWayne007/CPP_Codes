#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

ll DepthofLake(vector<vector<ll>>& grid , vector<vector<bool>>& vis , int i , int j , int n , int m)
{
    if(i == -1 || i == n || j == -1 || j == m || grid[i][j] == 0 || vis[i][j] == true)
    {
        return 0;
    }
    vis[i][j] = true;
    return grid[i][j] + DepthofLake(grid , vis , i + 1 , j , n , m) + DepthofLake(grid , vis , i , j + 1 , n , m) + DepthofLake(grid , vis , i - 1 , j , n , m) + DepthofLake(grid , vis , i , j - 1 , n , m);
}

void Solution(ll T)
{
    ll n , m;
    cin >> n >> m;
    vector<vector<ll>> grid(n , vector<ll>(m , -1));
    for(ll i = 0 ; i < n ; i++)
    {
        for(ll j = 0 ; j < m ; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<vector<bool>> visited(n , vector<bool>(m , false));
    ll mx = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(grid[i][j] == 0)
            {
                continue;
            }
            else if(visited[i][j] == true)
            {
                continue;
            }
            else
            {
                mx = max(mx , DepthofLake(grid , visited , i , j , n , m));
            }
        }
    }
    cout << mx << endl;
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