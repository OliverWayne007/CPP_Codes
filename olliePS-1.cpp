#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        int C,D;
        cin>>C>>D;
        int A1,A2,A3;
        cin>>A1>>A2>>A3;
        int B1,B2,B3;
        cin>>B1>>B2>>B3;
        int s1 = A1+A2+A3;
        int s2 = B1+B2+B3;
        int s3 = s1+s2;
        if(s1>=150 && s2>=150)
        {
            if(s3+C<s3+(D*2))
            {
               cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        if(s1<150 && s2<150)
        {
            cout<<"NO"<<endl;
        }
        if(s1>=150 && s2<150)
        {
            if(s3+C+D<s3+(D*2))
            {
                cout<<"YES"<<endl;
            }
            else
            {
               cout<<"NO"<<endl;
            }
        }
        if(s2>=150 && s1<150)
        {
            if(s3+C+D<s3+(D*2))
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

