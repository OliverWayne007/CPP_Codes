#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define pii pair<int , int>
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void solution()
{
    int n , h , m;
    cin >> n >> h >> m;
    vector<pii> p;
    for(ll i = 1 ; i <= n ; i++)
    {
        ll hr , mn;
        cin >> hr >> mn;
        p.push_back({hr , mn});
    }
    vector<pii> dur;
    for(auto alarm : p)
    {
        if(alarm.first >= h && alarm.second >= m)
        {
            dur.push_back({alarm.first - h , alarm.second - m});
            continue;
        }
        if(alarm.first == h && alarm.second < m)
        {
            ll hrs = 23 , mns = (60 - m) + alarm.second;
            dur.push_back({hrs , mns});
            continue;
        }
        if(alarm.first < h)
        {
            ll hrs = (23 - h) , mns = (60 - m);
            hrs += alarm.first , mns += alarm.second;
            if(mns >= 60)
            {
                hrs += 1;
                mns %= 60;
            }
            dur.push_back({hrs , mns});
            continue;
        }
        if(alarm.first > h && alarm.second < m)
        {
            ll hrs = alarm.first - h - 1 , mns = (60 - m) + alarm.second;
            dur.push_back({hrs , mns});
            continue;
        }
    }
    sort(dur.begin() , dur.end());
    cout << dur[0].first << " " << dur[0].second << endl;
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