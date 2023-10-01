#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void PrintGrid(vector<vector<int>>& grid)
{
    for(auto arr : grid)
    {
        for(auto ele : arr)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return;
}

int RowSearch(vector<vector<int>>& grid , int m)
{
    int stc = 0 , enc = m - 1 , col = m;
    while(stc <= enc)
    {
        int mid = (stc + enc)/2;
        if(grid[0][mid] >= 0)
        {
            stc = mid + 1;
        }
        else
        {
            col = mid;
            enc = mid - 1;
        }
    }
    return col;
}


int ColSearch(vector<vector<int>>& grid , int n , int col)
{
    int str = 0 , enr = n - 1 , row = n;
    while(str <= enr)
    {
        int mid = (str + enr)/2;
        if(grid[mid][col] >= 0)
        {
            str = mid + 1;
        }
        else
        {
            row = mid;
            enr = mid - 1;
        }
    }
    return row;
}


int countNegatives(vector<vector<int>>& grid) {
    int n = grid.size() , m = grid[0].size();
    int col = RowSearch(grid , m);
    int ans = (m - col) * n;
    for(int i = 0 ; i < col ; i++)
    {
        int row = ColSearch(grid , n , i);
        ans += (n - row);
    }
    return ans;
}

void Solution(ll T)
{
    int rows , cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << endl;
    cout << "Enter the number of cols: ";
    cin >> cols;
    cout << endl;
    vector<vector<int>> grid(rows , vector<int> (cols , 0));
    cout << "Enter the elements of the grid: " << endl << endl;
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << endl << endl;
    PrintGrid(grid);
    cout << endl;
    int ans = countNegatives(grid);
    cout << ans << endl << endl;
    return;
}

int main()
{
   // flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}