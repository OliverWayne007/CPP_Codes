#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// CODEFORCES - DECODING
int main()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    vector<char>v(n);
    int left_most = 0 , right_most = n-1 , j = n-1;
    while(j>=0)
    {
        if((n-1)%2 == 0)
        {
            if(j%2 == 0)
            {
                v[right_most] = str[j];
                right_most--;
                j--;
            }
            else
            {
                v[left_most] = str[j];
                left_most++;
                j--;
            }
        }
        else
        {
            if(j%2 != 0)
            {
                v[right_most] = str[j];
                right_most--;
                j--;
            }
            else
            {
                v[left_most] = str[j];
                left_most++;
                j--;
            } 
        }
    }
    for(auto it : v)
    {
        cout<<it;
    }
    cout<<endl;
    return 0;
}