#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin>>str;
    bool print = false;
    for(int i = 0 ; i<str.length() ; i++)
    {
        if(str[i] == 'H' || str[i] == '9' || str[i] == 'Q')
        {
            print = true;
            break;
        }

    }
    if(print == false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}