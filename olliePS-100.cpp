#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    for(ll i = 1 ; i<=t ; i++)
    {
        int j = 0;
        while(j<n-1)
        {
            if(str[j] == 'B' && str[j+1] == 'G')
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
                j += 2;
            }
            else
            {
                j++;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}