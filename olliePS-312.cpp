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
   vector<ll> v;
   ll pc = 0 , nc = 0 , zc = 0;
   for(ll i = 1 ; i <= n ; i++)
   {
      ll x;
      cin >> x;
      v.push_back(x);
      if(x > 0)
      {
         pc++;
      }
      else if(x < 0)
      {
         nc++;
      }
      else
      {
         zc++;
      }
   }
   sort(v.begin() , v.end());
   if(pc == 0)
   {
      if(nc == 0)
      {
         cout << "YES" << endl;
      }
      else
      {
         if(nc >= 2)
         {
            cout << "NO" << endl;
         }
         else
         {
            cout << "YES" << endl;
         }
      }
   }
   else
   {
      if(nc == 0)
      {
         if(pc >= 2)
         {
            cout << "NO" << endl;
         }
         else
         {
            cout << "YES" << endl;
         }
      }
      else
      {
         if(pc > 2 || nc > 2)
         {
            cout << "NO" << endl;
         }
         else
         {
            if(pc == 2 || nc == 2)
            {
               if(zc > 0)
               {
                  cout << "NO" << endl;
               }
               else
               {
                  if(pc == 2 && nc == 1)
                  {
                     if(v[0] + v[1] == 0 || v[0] + v[2] == 0)
                     {
                        cout << "YES" << endl;
                     }
                     else
                     {
                        cout << "NO" << endl;
                     }
                  }
                  if(nc == 2 && pc == 1)
                  {
                     if(v[2] + v[1] == 0 || v[2] + v[0] == 0)
                     {
                        cout << "YES" << endl;
                     }
                     else
                     {
                        cout << "NO" << endl;
                     }
                  }
                  if(pc == 2 && nc == 2)
                  {
                     ll c1 = v[0] + v[1] + v[2];
                     ll c2 = v[0] + v[1] + v[3];
                     ll c3 = v[0] + v[2] + v[3];
                     ll c4 = v[1] + v[2] + v[3];

                     vector<ll> possibility;
                     possibility.push_back(c1);
                     possibility.push_back(c2);
                     possibility.push_back(c3);
                     possibility.push_back(c4);
                     
                     for(int i = 0 ; i < 4 ; i++)
                     {
                        bool check = false;
                        for(ll j = 0 ; j < 4 ; j++)
                        {
                           if(possibility[i] == v[j])
                           {
                              check = true;
                           }
                           else
                           {
                              continue;
                           }
                        }
                        if(check == false)
                        {
                           cout << "NO" << endl;
                           return;
                        }
                     }
                     cout << "YES" << endl;
                  }
               }
            }
            else
            {
               if(v[0] + v[n-1] == 0)
               {
                  cout << "YES" << endl;
               }
               else
               {
                  cout << "NO" << endl;
               }
            }
         }
      }
   }
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