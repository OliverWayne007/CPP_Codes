#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str , s;
    cin>>str>>s;
    int ind = 0 , pos = 1;
    for(int i = 0 ; i<s.length() ; i++)
    {
        if(s[i] == str[ind])
        {
            ind++;
            pos++;
        }
    }
    cout<<pos<<endl;
    return 0;
}