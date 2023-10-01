#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution(ll T)
{
    ll n;
    cin >> n;
    map<string , int> mp1 , mp2 , mp3;
    for(ll i = 1 ; i <= 3 ; i++)
    {
        for(ll j = 1 ; j <= n ; j++)
        {
            string str;
            cin >> str;
            if(i == 1)
            {
                mp1[str]++;
            }
            else if(i == 2)
            {
                mp2[str]++;
            }
            else
            {
                mp3[str]++;
            }
        }
    }
    ll cnt1 = 0 , cnt2 = 0 , cnt3 = 0;
    for(auto it : mp1)
    {
        if(mp2.find(it.first) == mp2.end() && mp3.find(it.first) == mp3.end())
        {
            cnt1 += 3;
            continue;
        }
        if(mp2.find(it.first) != mp2.end() && mp3.find(it.first) != mp3.end())
        {
            continue;
        }
        if(mp2.find(it.first) == mp2.end() && mp3.find(it.first) != mp3.end())
        {
            cnt1 += 1;
            continue;
        }
        if(mp2.find(it.first) != mp2.end() && mp3.find(it.first) == mp3.end())
        {
            cnt1 += 1;
            continue;
        }
    }
    for(auto it : mp2)
    {
        if(mp1.find(it.first) == mp1.end() && mp3.find(it.first) == mp3.end())
        {
            cnt2 += 3;
            continue;
        }
        if(mp1.find(it.first) != mp1.end() && mp3.find(it.first) != mp3.end())
        {
            continue;
        }
        if(mp1.find(it.first) == mp1.end() && mp3.find(it.first) != mp3.end())
        {
            cnt2 += 1;
            continue;
        }
        if(mp1.find(it.first) != mp1.end() && mp3.find(it.first) == mp3.end())
        {
            cnt2 += 1;
            continue;
        }
    }
    for(auto it : mp3)
    {
        if(mp1.find(it.first) == mp1.end() && mp2.find(it.first) == mp2.end())
        {
            cnt3 += 3;
            continue;
        }
        if(mp1.find(it.first) != mp1.end() && mp2.find(it.first) != mp2.end())
        {
            continue;
        }
        if(mp1.find(it.first) == mp1.end() && mp2.find(it.first) != mp2.end())
        {
            cnt3 += 1;
            continue;
        }
        if(mp1.find(it.first) != mp1.end() && mp2.find(it.first) == mp2.end())
        {
            cnt3 += 1;
            continue;
        }
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;
    return;
}

int main()
{
   flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      solution(t);
      t++;        
   }
   return 0;
}