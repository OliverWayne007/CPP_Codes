#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    unordered_set<char>st;
    for(int i = 0 ; i<str.length() ; i++)
    {
        st.insert(str[i]);
    }
    int count = st.size();
    if(count%2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}