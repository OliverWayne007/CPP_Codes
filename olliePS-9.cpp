#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// The typedef keyword is used to create a synonym or a new name for an already existing datatype.
int main()
{
   ll t;
   cin>>t;
   for(ll i = 0 ; i<t ; i++)
   {
       ll n;
       cin>>n;
       if(n==1)
       {
           cout<<1<<endl;
       }
       else if(n>=2)
       {
           ll ans = 1;
           while(ans*2<=n)
           {
               ans = ans*2;
           }
           if(ans==n)
           {
               cout<<(n/2)<<endl;
           }
           else
           {
               ll x = n-ans+1;
               ll y = ans/2;
               if(x>y)
               {
               cout<<x<<endl;
               }
               else
               {
                   cout<<y<<endl;
               }

           }
       }

   }
   return 0;
}