#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int main()
{
    flash();
    ll a , b;
    cin >> a >> b;
    ll sum = a , curr = a/b , rem = a % b;
    while(curr > 0)
    {
        sum += curr;
        curr = (curr + rem);
        rem = curr % b;
        curr /= b;
    }
    cout << sum << endl;
    return 0;
}