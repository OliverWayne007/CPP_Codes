#include<iostream>
using namespace std;
// DIGIT REMOVAL CODECHEF OCTOBER LONG CHALLENGE !!!
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll i = 0 ; i<t ; i++)
    {
        ll n , d;
        cin>>n>>d;
        if(n>=1 && n<=9 && n==d)
        {
            cout<<1<<endl;
        }
        else if(n>=1 && n<=9 && n!=d)
        {
            cout<<0<<endl;
        }
        else if(n>9)
        {
            ll index;
            ll digit = -1;
            ll count = -1;
            ll copy = n;
            while(copy>0)
            {
                ll rem = copy%10;
                count++;
                if(rem==d)
                {
                    digit = rem;
                    index = count;
                    copy = copy/10;
                }
                else if(rem != d)
                {
                    copy = copy/10;
                    //continue;
                }
            }
            if(digit == -1)
            {
                cout<<0<<endl;
            }
            else if(digit>0 && digit<9 && index>0)
            {
                ll j = 1;
                for(ll i = 0 ; i<index ; i++)
                {
                    j = j*10;
                }
                cout<<(((n/j)+1)*j)-n<<endl;
            }
            else if(digit>=0 && digit<9 && index==0)
            {
                cout<<1<<endl;
            }
            else if(digit==0 && index>0)
            {
                ll q = 1 , j = 1;
                for(ll i = 0 ; i<=index ; i++)
                {
                    j = j*10;
                    q = q+j;
                }
                cout<<(q-n)<<endl;
            }
            else if(digit==9 && index==count)
            {
                ll j = 1;
                for(ll i = 0 ; i<index ; i++)
                {
                    j = j*10;
                }
                cout<<(((n/j)+1)*j)-n<<endl;
            }
            else if(digit==9 && index<count)
            {
                ll j = 1;
                ll id = index+1;
                bool check = true;
                for(ll i = 0 ; i<index ; i++)
                {
                    j = j*10;
                }
                ll num = n/j;
                while(id<=count)
                {
                   num = num/10;
                   if(num%10 != 8 && id==(index+1))
                   {
                       //cout<<(((n/j)+1)*j)-n<<endl;
                       check = false;
                       break;
                   }
                   else if(num%10==8)
                   {
                       id++;
                       continue;
                   }
                   else if(num%10 != 8 && id>(index+1))
                   {
                       break;
                   }
                }
                if(check == true)
                {
                   int s = 1;
                   for(int i = 1 ; i<=id ; i++)
                   {
                    s = s*10;
                   }
                   cout<<(((n/s)+1)*s)-n<<endl;
                }
                else
                {
                    cout<<(((n/j)+1)*j)-n<<endl;
                }
            }
        }
    }
    return 0;
}