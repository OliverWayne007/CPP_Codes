#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum = a+b+c;
        int q = sum/d;
        int rem = sum%d;
        if(rem>0)
        {
            cout<<q+1<<endl;
        }
        else if(rem==0)
        {
            cout<<q<<endl;
        }
    }
    return 0;
}