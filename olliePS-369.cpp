#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n , k;
    cin >> n >> k;
    double sum = 0;
    vector<double> v;
    for(ll i = 1 ; i <= n ; i++)
    {
        double x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    sort(v.begin() , v.end());
    double low = 0 , high = v[n - 1];
    double ans;
    while(low < high && (high - low) >= 1e-7)
    {
        double mid = (low + high)/2.0;
        ll ct = 0;
        for(auto it : v)
        {
            ct += it/mid;
        }
        if(ct == k)
        {
            ans = mid;
            low = mid;
        }
        if(ct < k)
        {
            high = mid;
        }
        if(ct > k)
        {
            low = mid;
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