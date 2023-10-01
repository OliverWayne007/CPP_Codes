#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin>>str;
    ll n = str.length();
    if(n<=7)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool dangerous = false;
        int i = 0 , j = 1 , count = 1 , num;
        while(j<n)
        {
            if(count>=7)
            {
                dangerous = true;
                break;
            }
            if(str[i] == str[j])
            {
                count++;
                j++;
            }
            else if(str[i] != str[j])
            {
                i=j;
                count = 1;
                j++;
            }
        }
        if(dangerous == false && count<7)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}