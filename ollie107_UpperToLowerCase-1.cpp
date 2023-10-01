#include<iostream>
using namespace std;
// CONVERSION OF UPPERCASE LETTERS TO LOWERCASE LETTERS !!!
int main()
{
    // 1. CONVERTING UPPERCASE LETTERS TO LOWERCASE LETTERS WITHOUT USING STRING FUNCTIONS.
    char UpperCase , LowerCase;
    int ascii;
    cout<<"Enter an uppercase letter: ";
    cin>>UpperCase;
    if(UpperCase>='A' && UpperCase<='Z')
    {
         ascii = UpperCase;            // EXAMPLE OF IMPLICIT(automatic) TYPECASTING
         cout<<"The ASCII value of "<<UpperCase<<" is: "<<ascii<<endl;
         int temp = ascii+32;
         // LowerCase = char(temp);    // EXAMPLE OF EXPLICIT TYPECASTING
         // LowerCase = (char)temp;    // EXAMPLE OF EXPLICIT TYPECASTING
         LowerCase = temp;             // EXAMPLE OF IMPLICIT(automatic) TYPECASTING
         int shit = LowerCase;         // EXAMPLE OF IMPLICIT(automatic) TYPECASTING
         cout<<"The corresponding lowercase letter of "<<UpperCase<<" is: "<<LowerCase<<endl;
         cout<<"The ASCII value of "<<LowerCase<<" is: "<<shit<<endl;
    }
    else if(UpperCase>='a' && UpperCase<='z')
    {
        cout<<"Already in LowerCase !!!"<<endl;
    }
    else
    {
        cout<<"Invalid Input !!!"<<endl;
    }
   
    return 0;
}