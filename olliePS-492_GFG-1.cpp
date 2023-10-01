#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int minimumMagic(int n , int m , vector<int>& price , vector<int>& magical_price)
{
    int psum = 0 , mpsum = 0;
    vector<int> gain;
    for(int i = 0 ; i < n ; i++)
    {
        psum += price[i];
        mpsum += magical_price[i];
        gain.push_back(magical_price[i] - price[i]);
    }
    if(psum <= m)
    {
        return 0;
    }
    if(mpsum > m)
    {
        return -1;
    }
    sort(gain.begin() , gain.end());
    int idx = 0 , cnt = 0;
    while(psum > m)
    {
        psum += gain[idx];
        idx++;
        cnt++;
    }
    return cnt;
}

void Solution(ll T)
{
    int n , m;
    cout << "Enter the value of n: " ;
    cin >> n;
    cout << "Enter the value of m: ";
    cin >> m;
    vector<int> price , magical_price;
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        price.push_back(x);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        magical_price.push_back(x);
    }
    int ans = minimumMagic(n , m , price , magical_price);
    cout << ans << endl;
    return;
}

int main()
{
   //flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}