#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str , s;
    cin>>str>>s;
    int n = str.length();
    bool check = true;
    for(int i = 0 ; i<n ; i++)
    {
        if(str[i]<'a')
        {
            str[i] = str[i]+32;
        }
    }

    for(int i = 0 ; i<n ; i++)
    {
       if(s[i]<'a')
        {
            s[i] = s[i]+32;
        }
    }

    for(int i = 0 ; i<n ; i++)
   {
        if(str[i] == s[i])
        {
            continue;
        }

        else if(str[i]<s[i])
        {
            cout<<-1<<endl;
            check = false;
            break;
        }

        else
        {
            cout<<1<<endl;
            check = false;
            break;
        }
    
   }

    if(check == true)
    {
        cout<<0<<endl;
    }

    return 0;
}