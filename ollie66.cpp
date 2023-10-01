#include<iostream>
#include<string>
using namespace std;
// REVERSING A GIVEN STRING !!!
int main()
{
    string str;
    cout<<"Enter the value of string str: "<<endl;
    cin>>str;
    for(int i = 0 ; i<str.length()/2 ; i++)
    {
        char s = str[i];
        str[i] = str[str.size()-i-1];
        str[str.size()-i-1] = s;
    }
    
    cout<<str<<endl;
    return 0;
}