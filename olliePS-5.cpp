#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        int x,y;
        cin>>x>>y;
        if((x-y)==0)
        {
            cout<<"YES"<<endl;
        }
        else if((x-y)>0)
        {
            if((x-y)%2==0)
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
            if((y-x)%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}