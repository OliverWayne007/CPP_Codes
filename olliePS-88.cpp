#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    string str;
    cin>>str;
    string s = "hello" , st = "";
    for(int i = 0 , j = 0 ; (i<str.length() && j<5) ; i++)
    {
        if(str[i] == s[j])
        {
            st += str[i];
            j++;
        }
    }
    if(st == s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}