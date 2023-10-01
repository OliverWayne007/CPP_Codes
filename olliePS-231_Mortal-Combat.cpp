#include<bits/stdc++.h>
using namespace std;
#define flash() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
int main()
{
    flash();
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
    {
        int n;
        cin >> n;
        vector<int> v;
        for(int j = 1 ; j <= n ; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int idx = 0 , skip_points = 0 , fkills = 0 , mkills = 0;
        if(v[idx] == 0)
        {
            fkills++;
            idx++;
        }
        else
        {
            fkills++;
            skip_points++;
            idx++;
        }
        while(idx < n)
        {
            if(fkills == 1)
            {
                if(v[idx] == 1)
                {
                    mkills++;
                    fkills = 0;
                }
                else
                {
                    fkills++;
                }
            }
            else if(fkills == 2)
            {
                fkills = 0;
                mkills++;
            }
            else
            {
                if(mkills == 2)
                {
                    if(v[idx] == 1)
                    {
                        skip_points++;
                    }
                    fkills++;
                    mkills = 0;
                }
                else if(mkills == 1)
                {
                    if(v[idx] == 0)
                    {
                        fkills++;
                        mkills = 0;
                    }
                    if(v[idx] == 1)
                    {
                        mkills++;
                    }
                }
            }
            idx++;
        }
        cout << skip_points << endl;
    }
    return 0;
}