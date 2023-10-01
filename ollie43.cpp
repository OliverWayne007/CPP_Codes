#include<iostream>
using namespace std;
int main()
{
    string mannu[3] = {"ankit" , "arpit" , "biramther"};
    for(int i = 0 ; i<3 ; i++)
    {
        string s = mannu[i];
        for(int j = 0 ; j<s.length() ; j++)
        {
            if(s[j] == 'a' || s[j]=='e')
            {
                cout<<s<<" "<<j<<" "<<s[j]<<endl;
            }

        }
    }

    return 0;
}