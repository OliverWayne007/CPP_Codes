#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// ----------------------------------------------------------------------------------------------------------------------------------

// Problem Description :

// You are given a maze with N cells. Each cell may have multiple entry points but not more than one exit (i.e. entry/exit points are unidirectional doors like valves). The cells are named with an integer from 0 to N-1.

// You have to find :

// Nearest meeting cell : Given any two cells - C1, C2, find the closest cell Cm that can be reached from both C1 and C2.

// INPUT FORMAT :

// The first line contains the number of cells N.
// The second line has a list of N values of the edge[ ] array, where edge[i] conatins the cell number that can be reached from cell 'i' in one step. edge[i] is -1 if the ith doesn't have an exit.
// Third line for each testcase contains two cell numbers whose nearest meeting cell needs to be found. (return -1 if there is no meeting cell from two given cells)
// OUTPUT FORMAT :
// Output a single line that denotes the nearest meeting cell (NMC).

// Sample Input :
// 23
// 4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21
// 9 2

// Sample Output :
// 4


// Problem Link: https://leetcode.com/discuss/interview-question/2032910/juspay-oa-nearest-meeting-cell


// ------------------------------------------------------- CODE --------------------------------------------------------------------


void find_reachable_nodes(vector<ll>& edges , ll n , ll source , vector<ll>& reachable_nodes_from_source)
{
   vector<bool> visited(n , false);
   ll node = edges[source];
   while(node != -1 && visited[node] == false)
   {
      visited[node] = true;
      reachable_nodes_from_source.push_back(node);
      node = edges[node];
   }
   return;
}

void Solution(ll T)
{
   ll n;
   cin >> n;
   vector<ll> edges(n);
   for(ll from_vertex = 0 ; from_vertex < n ; from_vertex++)
   {
      ll to_vertex;
      cin >> to_vertex;
      edges[from_vertex] = to_vertex;
   }
   ll node1 , node2;
   cin >> node1 >> node2;
   vector<ll> reachable_nodes_from_node1 , reachable_nodes_from_node2;
   find_reachable_nodes(edges , n , node1 , reachable_nodes_from_node1);
   find_reachable_nodes(edges , n , node2 , reachable_nodes_from_node2);
   if(reachable_nodes_from_node1.size() == 0 || reachable_nodes_from_node2.size() == 0)
   {
      cout << -1 << endl;
      return;
   }
   map<ll , ll> mp1 , mp2;
   ll dist1 = 0 , dist2 = 0;
   for(auto it : reachable_nodes_from_node1)
   {
      dist1 += 1;
      mp1[it] = dist1;
   }
   for(auto it : reachable_nodes_from_node2)
   {
      dist2 += 1;
      mp2[it] = dist2;
   }
   ll ans = -1 , min_dist = INF;
   for(auto it : reachable_nodes_from_node1)
   {
      if(mp2.find(it) == mp2.end())
      {
         continue;
      }
      ll dist = mp1[it] + mp2[it];
      if(dist < min_dist)
      {
         min_dist = dist;
         ans = it;
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
      Solution(t);
      t++;        
   }
   return 0;
}