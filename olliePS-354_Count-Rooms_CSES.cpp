#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void dfs(vector<vector<char>>& grid , ll n , ll m , ll row , ll col , vector<vector<bool>>& visited)
{
   visited[row][col] = true;
   if(row - 1 >= 0 && grid[row - 1][col] != '#' && visited[row - 1][col] != true)
   {
      dfs(grid , n , m , row - 1 , col , visited);
   }
   if(row + 1 < n && grid[row + 1][col] != '#' && visited[row + 1][col] != true)
   {
      dfs(grid , n , m , row + 1 , col , visited);
   }
   if(col - 1 >= 0 && grid[row][col - 1] != '#' && visited[row][col - 1] != true)
   {
      dfs(grid , n , m ,  row , col - 1 , visited);
   }
   if(col + 1 < m && grid[row][col + 1] != '#' && visited[row][col + 1] != true)
   {
      dfs(grid , n , m , row , col + 1 , visited);
   }
}

void solution(ll T)
{
   ll n , m;
   cin >> n >> m;
   vector<vector<char>> grid(n , vector<char>(m));
   for(ll row = 0 ; row < n ; row++)
   {
      for(ll col = 0 ; col < m ; col++)
      {
         cin >> grid[row][col];
      }
   }
   vector<vector<bool>> visited(n , vector<bool>(m , false));
   ll ans = 0;
   for(ll i = 0 ; i < n ; i++)
   {
      for(ll j = 0 ; j < m ; j++)
      {
         if(grid[i][j] == '#')
         {
            continue;
         }
         else
         {
            if(visited[i][j] == true)
            {
               continue;
            }        
            ans++;
            dfs(grid , n , m , i , j , visited);
         }
      }
   }
   cout << ans << endl;
   return;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      solution(t);
      t++;        
   }
   return 0;
}