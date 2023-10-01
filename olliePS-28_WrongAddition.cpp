#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i = 1 ; i<=t ; i++)
    {
        ll a,s;
        cin>>a>>s;
        vector<int>va;
        vector<int>vs;
        vector<int>output;
        ll num1 = a;
        ll num2 = s;
        while(num1 != 0)
        {
            va.push_back(num1%10);
            num1 = num1/10;
        }
        reverse(va.begin() , va.end());

        while(num2 != 0)
        {
            vs.push_back(num2%10);
            num2 = num2/10;
        }
        reverse(vs.begin() , vs.end());

        bool check = true;
        while(vs.size() != 0)
        {
            if(va.size() == 0)
            {
                output.push_back(vs[vs.size()-1]);
                vs.pop_back();
                continue;
            }
            else if(vs[vs.size()-1]>=va[va.size()-1])
            {
                int digit = vs[vs.size()-1]-va[va.size()-1];
                output.push_back(digit);
                va.pop_back();
                vs.pop_back();
            }
            else if(vs[vs.size()-1]<va[va.size()-1])
            {
                int digit = (10*vs[vs.size()-2]+vs[vs.size()-1])-va[va.size()-1];
                if(digit>9)
                {
                    check = false;
                    cout<<-1<<endl;
                    break;
                }
                else
                {
                    output.push_back(digit);
                    va.pop_back();
                    vs.pop_back();
                    vs.pop_back();
                }
            }
        } 
        if(check == true)
        {
            if(va.size() != 0 && vs.size() == 0)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(auto it = output.end()-1 ; it>=output.begin() ; it--)
                {
                    if(it == output.end()-1 && (*it)==0)
                    {
                        continue;
                    }
                    cout<<(*it);
                }
                cout<<endl;
            }
        }

    }
    return 0;
}