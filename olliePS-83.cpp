#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str , s;
    cin>>str>>s;
    if(str == s)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(str.length()>s.length())
        {
            cout<<str.length()<<endl;
        }
        else
        {
            cout<<s.length()<<endl;
        }
    }
    return 0;
}