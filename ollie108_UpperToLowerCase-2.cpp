#include<iostream>
#include<string>
using namespace std;
// CONVERSION OF STRINGS FROM UPPERCASE TO LOWERCASE !!!
int main()
{
    // 1. CONVERTING STRINGS FROM UPPERCASE TO LOWERCASE WITHOUT USING STRING FUNCTIONS.
    string str;
    bool check = false;
    cout<<"Enter the string: ";
    getline(cin , str);
    string s = str;
    for(int i = 0 ; i<s.length() ; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            char UpperCase = s[i];
            int temp = UpperCase;
            char LowerCase = temp+32;
            s[i] = LowerCase;
            continue;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            continue;
        }
        else
        {
            check = true;
            break;
        }
    }
    if(check == false && s!=str)
    {
        cout<<"The LowerCase of the input string is: "<<s<<endl;
    }
    else if(check == false && s==str)
    {
        cout<<"String is already in lowercase !!!"<<endl;
    }
    else
    {
        cout<<"Invalid Input !!!"<<endl;
    }

    return 0;
}