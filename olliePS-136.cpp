#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll n,m;
    cin >> n >> m;
    ll cip = n*m , akt = 0 , mvk = 0 , turn = 0;
    while(cip > 0)
    {
        turn++;
        cip = cip - (n+m-1);
        m--;
        n--;
    }
    if(turn%2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
    return 0;
}