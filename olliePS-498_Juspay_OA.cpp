#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// -------------------------------------------------------------------------------------------------------------------------------

// Problem Description : You are given a maze with N cells. Each cell may have multiple entry points but not more than one exit (i.e. entry/exit points are unidirectional doors like valves).

// The cells are named with an integer from 0 to N-1.

// You have to find : Find the node number of maximum weight node (Weight of a node is the sum of all nodes pointing to that node).

// INPUT FORMAT :

// The first line contains the number of cells N.
// The second line has a list of N values of the edge[ ] array, where edge[i] conatins the cell number that can be reached 
// from cell 'i' in one step. edge[i] is -1 if the ith doesn't have ans exit.


// OUTPUT FORMAT :

// First line denotes the node number with maximum weight node.


// Sample Input :
// 23
// 4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21

// Sample Output :
// 22


// Problem Link: https://leetcode.com/discuss/interview-question/2032859/juspay-oa-maximum-weight-node


// ------------------------------------------------------ CODE -----------------------------------------------------------------------


void Solution(ll T)
{
   ll n;
   cin >> n;
   vector<ll> edge(n);
   for(ll from_vertex = 0 ; from_vertex < n ; from_vertex++)
   {
      ll to_vertex;
      cin >> to_vertex;
      edge[from_vertex] = to_vertex;
   }
   vector<ll> weights(n , 0);
   for(ll vertex = 0 ; vertex < n ; vertex++)
   {
      ll node = edge[vertex];
      if(node == -1)
      {
         continue;
      }
      weights[node] += vertex;
   }
   ll max_weight_node = max_element(weights.begin() , weights.end()) - weights.begin();
   cout << max_weight_node << endl;
   return;
}

int main()
{
   flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}