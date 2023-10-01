#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        if(s.length()<=3){
            cout<<1<<endl;
            continue;
        }
        
        unordered_set<char> ts;
        for(ll i=0;i<s.length();i++){
            if (ts.find(s[i]) == ts.end()){
                ts.insert(s[i]);
            }
        }
        
        if(ts.size()<=3){
            cout<<1<<endl;
            continue;
        }
        else{
            ll count = 0;
            ll days = 0;
            for(ll i = 0; i < s.length(); i++){
                if (ts.find(s[i]) != ts.end()){
                    count++;
                }
                if(count==3){
                    days++;
                }
                if(count==4){
                    i-=1;
                    count=0;
                    continue;
                }
                if(((s.length()-1)-i)<=3){
                    days++;
                    break;
                }
            }
            cout<<days<<endl;
        }
        
    }
    return 0;
}