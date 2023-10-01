#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    ll t;
    cin >> t;
    for(ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        if(str[0] == '0' || str[1] == '0' || str[n] == '0')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            vector<ll> vec;
            vec.push_back(0);
            vec.push_back(1);
            for(ll j = 2 ; j < n ; j++)
            {
                if(str[j] == '0')
                {
                    vec.push_back(j);
                    ll temp = vec[vec.size()-2];
                    vec[vec.size()-2] = vec[vec.size()-1];
                    vec[vec.size()-1] = temp;
                }
                else
                {
                    vec.push_back(j);
                }
            }
            for(auto it : vec)
            {
                cout << it << " ";
            }
            
            cout << endl;
        }
    }
    return 0;
}