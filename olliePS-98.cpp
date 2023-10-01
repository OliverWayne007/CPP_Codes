#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin>>str;
    int cl = 0 , cu = 0;
    for(int i = 0 ; i<str.length() ; i++)
    {
        if(str[i]-'a'>=0)
        {
            cl++;
        }
        else
        {
           str[i] = (int)('a') + (int)(str[i]-'A');
           cu++;
        }
    }
    if(cl>=cu)
    {
        for(int i = 0 ; i<str.length() ; i++)
        {
            if(str[i]-'a'>=0)
            {
                continue;
            }
            else
            {
               str[i] = (int)('a') + (int)(str[i]-'A');
            }
        }
    }
    else
    {
        for(int i = 0 ; i<str.length() ; i++)
        {
            if(str[i]-'a'>=0)
            {
                str[i] = (int)'A' + (int)(str[i]-'a');
            }
            else
            {
               continue;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}