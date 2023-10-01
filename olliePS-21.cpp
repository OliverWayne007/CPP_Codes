#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(int k = 1 ; k<=t ; k++)
    {
        string str;
        int n;
        cin>>n;
        for(int i = 1 ; i<=n-2 ; i++)
        {
            string s;
            cin>>s;
            str = str + s;
        }

        int i = 1 , j = 2;
        int index1 , index2;
        bool check = true;
        while(j<=str.length()-1)
        {
            if(str[i] == str[j])
            {
                i = i+2;
                j = j+2;
            }
            else if(str[i] != str[j])
            {
                index1 = i;
                index2 = j;
                check = false;
                break;
            }
        }
        if(check == false)
        {
            for(int i = 0 ; i<index1 ; i = i+2)
            {
                cout<<str[i];
            }
            cout<<str[index1];
            for(int i = index2 ; i<=str.length()-2 ; i = i+2)
            {
                cout<<str[i];
            }
            cout<<str[str.length()-1];
            cout<<endl;
        }
        else
        {
           for(int i = 0 ; i<=str.length()-2 ; i = i+2)
            {
                cout<<str[i];
            } 
            cout<<str[str.length()-1]<<'a'<<endl;
        }

    }
    return 0;
}