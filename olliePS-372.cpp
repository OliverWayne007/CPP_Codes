#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void Solution(ll T)
{
    ll n;
    cin >> n;

    ll v[n];

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    vector<ll> color(n, 0);

    ll lim = v[0];

    for (ll i = 1; i < n; i++)
    {
        if (v[i] < lim)
        {
            color[i] = 1;
        }
        else
            lim = v[i];
    }

    vector<ll> color1, color0;

    for (ll i = 0; i < n; i++)
    {
        if (color[i] == 1)
            color1.push_back(v[i]);
        else
            color0.push_back(v[i]);
    }

    bool check1 = 0, check2 = 0;

    ll col1 = color1.size(), col0 = color0.size();

    for (ll i = 0; i < col1 - 1; i++)
        if (color1[i + 1] < color1[i])
            check1 = 1;
    for (ll i = 0; i < col0 - 1; i++)
        if (color0[i + 1] < color0[i])
            check2 = 1;

    if (check1 || check2)
        cout << "No";
    else
        for (ll i = 0; i < n; i++)
            cout << color[i];
    cout << endl;
}

int main()
{
    flash();
    ll tc;
    cin >> tc;
    ll t = 1;
    while (t <= tc)
    {
        Solution(t);
        t++;
    }
    return 0;
}