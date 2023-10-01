#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        int n;
        cin>>n;
        string s1 , s2;
        cin>>s1>>s2;
        string str1 , str2 , str11 , str22;
        int count = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(s1[i]==s2[i])
            {
                continue;
            }
            else if(s1[i] != s2[i])
            {
                count++;
                if(count==1)
                {
                   str1 = s1[i];
                   str2 = s2[i];
                }
                else if(count==2)
                {
                    str11 = s1[i];
                    str22 = s2[i];
                }
                else if(count>2)
                {
                    cout<<"No"<<endl;
                    break;
                }
            }
        }
        if(count==1)
        {
            cout<<"No"<<endl;
        }
        else if(count==2)
        {
            if(str1==str11 && str2==str22)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}