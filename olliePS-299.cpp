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
    string str;
    cin >> str;
    vector<int> with_carry , without_carry;
    for(ll i = 0 ; i < 10 ; i++)
    {
        if(i == 0)
        {
            without_carry.push_back(1);
            with_carry.push_back(0);
        }
        else if(i == 1)
        {
            without_carry.push_back(0);
            with_carry.push_back(9);
        }
        else
        {
            ll x = 11 - i;
            without_carry.push_back(x);
            with_carry.push_back(x - 1);
        }
    }
    if(str[0] == '9')
    {
        int carry = 0;
        vector<ll> v;
        for(ll i = n-1 ; i >= 0 ; i--)
        {
            if(i == n-1)
            {
                v.push_back(without_carry[str[i] - '0']);
                if(str[i] == '0' || str[i] == '1')
                {
                    continue;
                }
                else
                {
                    carry = 1;
                }
            }
            else
            {
                if(str[i] == '0')
                {
                    if(carry == 1)
                    {
                        v.push_back(with_carry[str[i] - '0']);
                    }
                    else
                    {
                        v.push_back(without_carry[str[i] - '0']);
                    }
                    carry = 0;
                }
                else if(str[i] == '1')
                {
                    if(carry == 0)
                    {
                        v.push_back(without_carry[str[i] - '0']);
                    }
                    else
                    {
                        v.push_back(with_carry[str[i] - '0']);
                    }
                }
                else
                {
                    if(carry == 0)
                    {
                        v.push_back(without_carry[str[i] - '0']);
                    }
                    else
                    {
                        v.push_back(with_carry[str[i] - '0']);
                    }
                    carry = 1;
                }
            }
        }
        reverse(v.begin() , v.end());
        for(auto it : v)
        {
            cout << it;
        }
        cout << endl;
    }
    else
    {
        for(ll i = 0 ; i < n ; i++)
        {
            cout << '9' - str[i];
        }
        cout << endl;
    }
    return;
}

int main()
{
   flash();
   ll t;
   cin >> t;
   while(t--)
   {
      solution();
   }
   return 0;
}