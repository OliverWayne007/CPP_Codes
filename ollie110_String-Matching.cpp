#include<bits/stdc++.h>
using namespace std;
// String-Matching Algorithm ----> BruteForce
int main()
{
    int t;
    cin>>t;
    for(int i = 1 ; i<=t ; i++)
    {
        string s , p;
        cin>>s>>p;
        int ls = s.length();
        int lp = p.length();
        int max = ls-lp;
        int count = 0;

        if(lp>ls)
        {
            cout<<"Matching not possible !!!"<<endl;
        }
        else
        {
            for(int i = 0 ; i<=max ; i++)
            {
                bool check = true;
                for(int j = 0 ; j<lp ; j++)
                {
                    if(s[i+j] == p[j])
                    {
                        continue;
                    }
                    else
                    {
                        check = false;
                        break;
                    }
                }

                if(check == true)
                {
                    count++;
                }
            }

            cout<<count<<endl;
        }

    }

    return 0;
}