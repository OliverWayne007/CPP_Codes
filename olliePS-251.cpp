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
    ll n;
    cin >> n;
    string arr[5] = {"Sheldon" , "Leonard" , "Penny" , "Rajesh" , "Howard"};
    if(n <= 5)
    {
        cout << arr[n-1] << endl;
        return;
    }
    ll i = 1;
    ll sum;
    while((5 * ((1 << i) - 1)) < n)
    {
        sum = 5 * ((1 << i) - 1);
        ++i;
    }
    ll gp = 1 << (i - 1);
    ll pos = (n - sum) + (gp - 1);
    cout << arr[(pos/gp) - 1] << endl;
    return;
}

int main()
{
   flash();
   ll t = 1;
   while(t--)
   {
      solution();
   }
   return 0;
}