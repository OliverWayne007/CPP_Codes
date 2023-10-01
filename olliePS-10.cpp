#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
   ll t;
   cin>>t;
   for(ll i = 0 ; i<t ; i++)
   {
       ll x;
       cin>>x;
       if(x==0)
       {
           cout<<1<<endl;
       }
       else
       {
          ll ans = 1;
          while(ans*2<=x)
           {
               ans = ans*2;
           }
          if(ans==x && x>1)
          {
              cout<<x<<endl;
          }
          else if((ans+1) == x && x>3)
          {
              cout<<x-1<<endl;
          }
          else if(((2*ans)-1) == x)
          {
             cout<<x+1<<endl;
          }
          else
          {
              cout<<ans<<endl;
          }
       }
   }
   return 0;
}