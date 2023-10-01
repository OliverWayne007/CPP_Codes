#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //int x,y,z;
    for(int i = 1 ; i<=t ; i++)
    {
       int x,y,z;
       cin>>x>>y>>z;
       if(x>=y)
       {
           cout<<"YES"<<endl;
       }
       else if(x<y && z>0)
       {
           if(((z*2)+x)>=y)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}