#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    string str;
    cin >> str;
    bool au = true;
    for(ll i = 1 ; i < str.size() ; i++)
    {
        if(isupper(str[i]) == true)
        {
            continue;
        }
        else
        {
            au = false;
            break;
        }
    }
    if(au == true)
    {
        for(ll i = 0 ; i < str.size() ; i++)
        {
            if(str[i] - 'a' < 0)
            {
                cout << (char) ('a' + (str[i] - 'A'));
            }
            else
            {
                cout<< (char) ('A' + (str[i] - 'a'));
            }
        }
        cout << endl;
    } 
    else
    {
        cout << str << endl;
    }
    return 0;
}