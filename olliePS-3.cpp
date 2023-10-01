#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++)
    {
        int n;
        cin>>n;
        int x , y=1;
        if(n==1)
        {
            x=3;
            cout<<x<<endl;
        }
        else if(n>1)
        {
            for(int i=0 ; i<(n-1) ; i++)
            {
                y=y*10;
            }
            // y=pow(10,n-1);
            x=y+5;
            cout<<x<<endl;
        }

    }
    return 0;
}