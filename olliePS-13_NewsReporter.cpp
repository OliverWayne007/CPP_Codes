#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll n;
    cin>>n;
    vector<int>v;
    bool check = false;
    for(ll i = 1 ; i<=n ; i++)
    {
        ll p;
        cin>>p;
        if(p%2==1)
        {
            continue;
        }
        else if(p%2==0)
        {
          check = true;
            v.push_back(p);
        }
        
    }
    
    if(check==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        sort(v.begin() , v.end() , greater<int>());
        for(auto it:v)
        {
            cout<<it<<" ";
        }
    }
    return 0;
}