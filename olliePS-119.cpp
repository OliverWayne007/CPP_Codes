#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    string str;
    cin >> str;
    ll n = str.length();
    vector<ll> q , a;
    for(ll i = 0 ; i < n ; i++)
    {
        if(str[i] == 'Q')
        {
            q.push_back(i);
        }
        else if(str[i] == 'A')
        {
            a.push_back(i);
        }
        else
        {
            continue;
        }
    }
    if(a.size() == 0 || q.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
    ll idx = 0 , num = 0;
    for(ll i = 0 ; i < q.size()-1 ; i++)
    {
        while(a[idx] <= q[i] && idx < a.size())
        {
            idx++;
        }
        for(ll j = i+1 ; j < q.size() ; j++)
        {
            if(a[idx] < q[j])
            {
                while(a[idx] < q[j] && idx < a.size())
                {
                    num += q.size()-j;
                    idx++;
                }
            }
        }
        idx = 0;
    }
    cout << num << endl;
    }
    return 0;
}