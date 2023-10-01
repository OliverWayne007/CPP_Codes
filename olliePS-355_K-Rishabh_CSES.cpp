#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
string grid[N];


bool checkInside(int n, int m, int i, int j){
	return i >= 0 and j >= 0 and i < n and j < m ;
}

void dfs(int n, int m, int i, int j){
	grid[i][j] = '#';

	if(checkInside(n, m, i+1, j) and grid[i+1][j] == '.'){
		dfs(n, m, i+1, j);
	}

	if(checkInside(n, m, i-1, j) and grid[i-1][j] == '.'){
		dfs(n, m, i-1, j);
	}

	if(checkInside(n, m, i, j-1) and grid[i][j-1] == '.'){
		dfs(n, m, i, j-1);
	}

	if(checkInside(n, m, i, j+1) and grid[i][j+1] == '.'){
		dfs(n, m, i, j+1);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, m ; cin >> n >> m ;
	for(int i = 0 ; i < n ; i++){
		cin >> grid[i];
	}

	int ans = 0;
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(grid[i][j] == '.'){
				ans++;
				dfs(n, m, i, j);
			}
		}
	}

	cout << ans << endl;

}