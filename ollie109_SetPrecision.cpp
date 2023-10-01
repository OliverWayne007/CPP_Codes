#include<bits/stdc++.h>
using namespace std;
// LEARNING TO USE ceil() , floor() , trunc() , round() and setprecision() function !!!
int main()
{
    double a = 1.500 , b = 1.611 , c = 1.411 , d = 1;
    cout<<"The value of ceil(1.500) is: "<<ceil(a)<<endl;
    cout<<"The value of ceil(1.611) is: "<<ceil(b)<<endl;
    cout<<"The value of ceil(1.411) is: "<<ceil(c)<<endl;
    cout<<"The value of ceil(1) is: "<<ceil(d)<<endl;

    cout<<endl;

    double x = -1.500 , y = -1.411 , z = -1.611 , w = -1;
    cout<<"The value of ceil(-1.500) is: "<<ceil(a)<<endl;
    cout<<"The value of ceil(-1.411) is: "<<ceil(b)<<endl;
    cout<<"The value of ceil(-1.611) is: "<<ceil(c)<<endl;
    cout<<"The value of ceil(-1) is: "<<ceil(d)<<endl;

    cout<<endl;

    cout<<"The value of floor(1.500) is: "<<floor(a)<<endl;
    cout<<"The value of floor(1.611) is: "<<floor(b)<<endl;
    cout<<"The value of floor(1.411) is: "<<floor(c)<<endl;
    cout<<"The value of floor(1) is: "<<floor(d)<<endl;

    cout<<endl;

    cout<<"The value of floor(-1.500) is: "<<floor(x)<<endl;
    cout<<"The value of floor(-1.411) is: "<<floor(y)<<endl;
    cout<<"The value of floor(-1.611) is: "<<floor(z)<<endl;
    cout<<"The value of floor(-1) is: "<<floor(w)<<endl;

    cout<<endl;

    cout<<"The value of trunc(1.500) is: "<<trunc(a)<<endl;
    cout<<"The value of trunc(1.611) is: "<<trunc(b)<<endl;
    cout<<"The value of trunc(1.411) is: "<<trunc(c)<<endl;
    cout<<"The value of trunc(1) is: "<<trunc(d)<<endl;

    cout<<endl;

    cout<<"The value of trunc(-1.500) is: "<<trunc(x)<<endl;
    cout<<"The value of trunc(-1.411) is: "<<trunc(y)<<endl;
    cout<<"The value of trunc(-1.611) is: "<<trunc(z)<<endl;
    cout<<"The value of trunc(-1) is: "<<trunc(w)<<endl;

    cout<<endl;

    cout<<"The value of round(1.500) is: "<<round(a)<<endl;
    cout<<"The value of round(1.611) is: "<<round(b)<<endl;
    cout<<"The value of round(1.411) is: "<<round(c)<<endl;
    cout<<"The value of round(1) is: "<<round(d)<<endl;

    cout<<endl;

    cout<<"The value of round(-1.500) is: "<<round(x)<<endl;
    cout<<"The value of round(-1.411) is: "<<round(y)<<endl;
    cout<<"The value of round(-1.611) is: "<<round(z)<<endl;
    cout<<"The value of round(-1) is: "<<round(w)<<endl;

    cout<<endl;

    double pi = 3.14159 , npi = -3.14159;
    cout<<fixed<<setprecision(0)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(1)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(2)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(3)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(4)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(5)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(6)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(7)<<pi<<" "<<npi<<endl;
    cout<<fixed<<setprecision(8)<<pi<<" "<<npi<<endl;

    return 0;
}