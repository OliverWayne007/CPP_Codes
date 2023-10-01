#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
       int arr[7];
       int s = 0 , r = 0;
       for(int i = 0 ; i<7 ; i++)
       {
           cin>>arr[i];
           if(arr[i]==1)
           {
               s++;
           }
           else if(arr[i]==0)
           {
               r++;
           }
       }
       if(s>r)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}