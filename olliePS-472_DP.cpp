#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define vll vector<long long>
#define vvll vector<vector<long long>> 
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

// Book-Shop problem -------- CSES Problem set ---------- 0/1 Knapsack

ll MaxNumPages(vll& book_price , vll& book_pages , ll nob , ll tpr , ll idx , vvll& dp)
{
    if(idx == nob)
    {
        return 0;
    }
    if(dp[idx][tpr] != -1)
    {
        return dp[idx][tpr];
    }
    ll ans = 0;
    if(book_price[idx] <= tpr)
    {
        ll take = book_pages[idx] + MaxNumPages(book_price , book_pages , nob , tpr - book_price[idx] , idx + 1 , dp);
        ll not_take = MaxNumPages(book_price , book_pages , nob , tpr , idx + 1 , dp);
        ans = max(take , not_take);
    }
    else
    {
        ans = MaxNumPages(book_price , book_pages , nob , tpr , idx + 1 , dp);
    }
    return dp[idx][tpr] = ans;
}

void Solution(ll T)
{
    ll nob , tpr;
    cin >> nob >> tpr;
    vector<ll> book_price , book_pages;
    for(ll i = 1 ; i <= nob ; i++)
    {
        ll price;
        cin >> price;
        book_price.push_back(price);
    }
    for(ll i = 1 ; i <= nob ; i++)
    {
        ll pages;
        cin >> pages;
        book_pages.push_back(pages);
    }
    vector<vector<ll>> dp(nob , vector<ll>(tpr + 1 , -1));
    ll ans = MaxNumPages(book_price , book_pages , nob , tpr , 0 , dp);
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