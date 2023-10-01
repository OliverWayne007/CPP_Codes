#include <iostream>

using namespace std;



int main()
{
    	
    int n,fac;
    fac = 1;
    cout<<"Enter an integer n: "<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"The value of "<<n<<" factorial is: "<<endl<<fac;
    }
    
    if(n<0)
    {
        cout<<"The factorial of negative numbers does not exist !!! "<<endl;
    }
    
    //else
    if(n>0)
    {
        
     fac=n;
    for(int i = n-1 ; i>=1 ; i--)
    {
        fac=fac*i;
    }
    
     cout<<"The value of "<<n<<" factorial is: "<<endl<<fac;
    }

    return 0;
}