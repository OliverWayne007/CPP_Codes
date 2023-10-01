#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool Check_If_Greater(int x , int n , int m)
{
    ll prod = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        if(prod * x <= m)
        {
            prod *= x;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int NthRoot(int n, int m) {
  int mn = 1 , mx = m , ans = -1;
  while(mn <= mx)
  {
      int x = (mn + mx)/2;
      bool check = Check_If_Greater(x , n , m);
      if(check == false)
      {
        mx = x - 1;
      }
      else
      {
        ll temp = pow(x , n);
        if(temp == m)
        {
            ans = x;
            break;
        }
        else
        {
            mn = x + 1;
        }
      }
  }
  return ans;
}

int main()
{
    int n , m;
    cin >> n >> m;
    int ans = NthRoot(n , m);
    cout << ans << endl;
    return 0;
}