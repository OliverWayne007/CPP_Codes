#include<bits/stdc++.h>
using namespace std;


    void Bit_Rep(int num , vector<int>& bit_rep)
    {
        if(num == 0)
        {
            bit_rep.push_back(0);
            return;
        }
        int div = num;
        int quo , rem;
        while(div != 0)
        {
            int quo = div/2;
            int rem = div % 2;
            bit_rep.push_back(rem);
            div = quo;
        }
        return;
    }


    void AppendZeroes(vector<int>& v)
    {
        int vs = v.size();
        for(int i = 1 ; i <= 32 - vs ; i++)
        {
            v.push_back(0);
        }
        return;
    }

    void Print(vector<int>& v)
    {
        for(int i = 0 ; i < v.size() ; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
   

    int minFlips(int a, int b, int c) {
        vector<int> bit_rep_a , bit_rep_b , bit_rep_c;
        Bit_Rep(a , bit_rep_a);
        Bit_Rep(b , bit_rep_b);
        Bit_Rep(c , bit_rep_c);
        AppendZeroes(bit_rep_a);
        AppendZeroes(bit_rep_b);
        AppendZeroes(bit_rep_c);
        reverse(bit_rep_a.begin() , bit_rep_a.end());
        reverse(bit_rep_b.begin() , bit_rep_b.end());
        reverse(bit_rep_c.begin() , bit_rep_c.end());

        Print(bit_rep_a);
        Print(bit_rep_b);
        Print(bit_rep_c);

        int n = bit_rep_c.size() , cnt = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(bit_rep_a[i] == bit_rep_c[i] && bit_rep_b[i] == bit_rep_c[i])
            {
                continue;
            }
            else if(bit_rep_a[i] != bit_rep_c[i] && bit_rep_b[i] != bit_rep_c[i] && bit_rep_c[i] == 1)
            {
                cnt += 1;
            }
            else if(bit_rep_a[i] != bit_rep_c[i] && bit_rep_b[i] != bit_rep_c[i] && bit_rep_c[i] == 0)
            {
                cnt += 2;
            }
            else
            {
                if(bit_rep_c[i] == 1)
                {
                    continue;
                }
                else
                {
                    cnt += 1;
                }
            }
        }
        return cnt;
    }

int main()
{
    int a , b , c;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;
    cout << "Enter the number c: ";
    cin >> c;
    int ans = minFlips(a , b , c);
    cout << ans << endl;
    return 0;
}