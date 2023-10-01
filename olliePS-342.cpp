#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define reverse_flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    ll n;
    cin >> n;
    cout << n << " ";
    ll i , j = n-1;
    if(n % 2 == 0)
    {
        i = n/2 - 1;
    }
    else
    {
        i = n/2;
    }
    ll turn = 0 , mid = i + 1;
    while(i > 0 && j > mid)
    {
        if(turn % 2 == 0)
        {
            cout << i << " ";
            i--;
        }
        else
        {
            cout << j << " ";
            j--;
        }
        turn++;
    }
    if(turn % 2 == 1)
    {
        cout << j << " " << mid << endl;
        return;
    }
    if(i != 0)
    {
        cout << i << " ";
    }
    cout << mid << endl;
    return;
}

int main()
{
    reverse_flash();
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}