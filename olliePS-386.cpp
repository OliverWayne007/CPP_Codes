#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

set<ll> primes;

void Find_Primes()
{
    vector<ll> v(1e6 + 1 , 1);
    v[0] = 0 , v[1] = 0;
    for(ll i = 2 ; i <= 1e3 ; i++)
    {
        if(v[i] == 0)
        {
            continue;
        }
        else
        {
            for(ll idx = i * i ; idx <= 1e6 ; idx += i)
            {
                v[idx] = 0;
            }
        }
    }
    for(ll i = 2 ; i <= 1e6 ; i++)
    {
        if(v[i] == 1)
        {
            primes.insert(i);
        }
    }
}

void Solution(ll T)
{
    ll a , b;
    cin >> a >> b;
    map<ll , ll> mpa , mpb;
    ll tmpa = a , tmpb = b;
    for(auto it : primes)
    {
        if(tmpa == 1)
        {
            break;
        }
        if(primes.count(tmpa) == 1)
        {
            mpa[tmpa]++;
            break;
        }
        if(primes.count(tmpa) == 0)
        {
            while(tmpa % it == 0)
            {
                tmpa /= it;
                mpa[it]++;
            }
            continue;
        }
    }
    for(auto it : primes)
    {
        if(tmpb == 1)
        {
            break;
        }
        if(primes.count(tmpb) == 1)
        {
            mpb[tmpb]++;
            break;
        }
        if(primes.count(tmpb) == 0)
        {
            while((tmpb % it) == 0)
            {
                tmpb /= it;
                mpb[it]++;
            }
            continue;
        }
    }
    if(mpa.size() != mpb.size())
    {
        cout << "NO" << endl;
        return;
    }
    vector<ll> ppa , ppb;
    for(auto it : mpa)
    {
        if(mpb.find(it.first) == mpb.end())
        {
            cout << "NO" << endl;
            return;
        }
        ppa.push_back(it.second);
        ppb.push_back(mpb[it.first]);
    }
    for(ll i = 0 ; i < ppa.size() - 1 ; i++)
    {
        if(ppa[i] * ppb[i + 1] != ppb[i] * ppa[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   Find_Primes();
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}