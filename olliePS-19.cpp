#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    vector<char>v;
    for(int i = 0 ; i<n ; i = i+2)
    {
        v.push_back(str[i]);
    }
    sort(v.begin() , v.end());
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i];
        if(i<v.size()-1)
        {
            cout<<'+';
        }
    }
    //cout<<endl;
    return 0;
}