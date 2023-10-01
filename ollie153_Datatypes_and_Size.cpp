#include<bits/stdc++.h>
#include<typeinfo>

using namespace std;

int main()
{
    cout << endl;
    
    // Printing the datatypes and their repective sizes

    cout << "int :                " << sizeof(int) << endl << endl;
    cout << "unsigned int :       " << sizeof(unsigned int) << endl << endl;
    cout << "signed int :         " << sizeof(signed int) << endl << endl;
    cout << "short int :          " << sizeof(short int) << endl << endl;
    cout << "long int :           " << sizeof(long int) << endl << endl;
    cout << "signed short int :   " << sizeof(signed short int) << endl << endl;
    cout << "unsigned short int : " << sizeof(unsigned short int) << endl << endl;
    cout << "signed long int :    " << sizeof(signed long int) << endl << endl;
    cout << "unsigned long int :  " << sizeof(unsigned long int) << endl << endl;
    cout << "long long :          " << sizeof(long long) << endl << endl;
    cout << "unsigned long long : " << sizeof(unsigned long long) << endl << endl;
 
    cout << "char :          " << sizeof(char) << endl << endl;
    cout << "unsigned char : " << sizeof(unsigned char) << endl << endl;
    cout << "signed char :   " << sizeof(signed char) << endl << endl;
 
    cout << "bool : " << sizeof(bool) << endl << endl;
 
    cout << "float :   " << sizeof(float) << endl << endl;
    cout << "double :  " << sizeof(double) << endl << endl;
    cout << "wchar_t : " << sizeof(wchar_t) << endl << endl;

    cout << endl;


    // Finding the datatypes of variables in C++

    int x1;
    cout << "The typeid for int is: " << typeid(x1).name() << endl << endl;

    unsigned int x2;
    cout << "The typeid for unsigned int is: " << typeid(x2).name() << endl << endl;

    signed int x3;
    cout << "The typeid for signed int is: " << typeid(x3).name() << endl << endl;

    short int x4;
    cout << "The typeid for short int is: " << typeid(x4).name() << endl << endl;

    long int x5;
    cout << "The typeid for long int is: " << typeid(x5).name() << endl << endl;

    signed short int x6;
    cout << "The typeid for signed short int is: " << typeid(x6).name() << endl << endl;

    unsigned short int x7;
    cout << "The typeid for unsigned short int is: " << typeid(x7).name() << endl << endl;

    signed long int x8;
    cout << "The typeid for signed long int is: " << typeid(x8).name() << endl << endl;

    unsigned long int x9;
    cout << "The typeid for unsigned long int is: " << typeid(x9).name() << endl << endl;

    long long x_1;
    cout << "The typeid for long long is: " << typeid(x_1).name() << endl << endl;

    unsigned long long x_2;
    cout << "The typeid for unsigned long long is: " << typeid(x_2).name() << endl << endl;

    char ch;
    cout << "The typeid for char is: " << typeid(ch).name() << endl << endl;

    unsigned char ch1;
    cout << "The typeid for unsigned char is: " << typeid(ch1).name() << endl << endl;

    signed char ch2;
    cout << "The typeid for signed char is: " << typeid(ch2).name() << endl << endl;

    bool b;
    cout << "The typeid for bool is: " << typeid(b).name() << endl << endl;

    float f;
    cout << "The typeid for float is: " << typeid(f).name() << endl << endl;

    double d;
    cout << "The typeid for double is: " << typeid(d).name() << endl << endl;

    wchar_t w;
    cout << "The typeid for wchar_t is: " << typeid(w).name() << endl << endl;

    cout << endl;

    return 0;
}

