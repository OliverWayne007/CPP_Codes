#include<iostream>
#include<string>
using namespace std;
// SOME BASICS OF C++ PROGRAMMING !!!  #TYPECASTING !!!

int main()
{
    int a = 10;
    float b = 23.76;
    char c = 'c';
    char d = 'd';
    string s = "Oliver";
    string t = "Queen";

    cout<<"Adding a float and an integer variable !!!       # Example of implicit typecasting !!!! "<<endl;
    cout<<a+b<<endl;
    cout<<"Adding an integer and a character variable !!!   # Example of implicit typecasting !!!"<<endl;
    cout<<a+c<<endl;
    cout<<b+d<<endl;
    cout<<"Adding two character variables !!!                # No typecasting required !!!"<<endl;
    cout<<c+d<<endl;
    cout<<"Adding two string variables !!!                   # No typecasting required !!!"<<endl;
    cout<<s+t<<endl;
    cout<<"Adding a string and a character variable !!!"<<endl;
    cout<<c+s<<endl;
    cout<<d+t<<endl;
    // cout<<a+s<<endl;
    // cout<<b+t<<endl;

    return 0;
}
