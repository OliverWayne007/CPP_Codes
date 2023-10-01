#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

string Binary_Representation(ll n)
{
    vector<ll> bin_rep;
    while(n > 0)
    {
        ll rem = n % 2;
        bin_rep.push_back(rem);
        n /= 2;
    }
    reverse(bin_rep.begin() , bin_rep.end());
    int res = 0;
    for(auto it : bin_rep)
    {
        res *= 10;
        res += it;
    }
    string binary = to_string(res);
    return binary;
}

ll Min_Bits_Req(ll n)
{
    ll min_req = 0;
    while(n > 0)
    {
        min_req++;
        n >>= 1;
    }
    return min_req;
}

ll Count_Set_Bits(ll n)
{
    ll cnt = 0;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            cnt++;
        }
        n /= 2;
    }
    return cnt;
}

ll Count_UnSet_Bits(ll n)
{
    ll cnt = 0;
    while(n > 0)
    {
        if(n % 2 == 0)
        {
            cnt++;
        }
        n /= 2;
    }
    return cnt;
}

bool Check_if_Set(ll num , ll bit)
{
    ll checker = (1 << bit);
    if(num & checker)
    {
        return true;
    }
    return false;
}

int main()
{
   ll n;
   cout << "Enter a positive number: ";
   cin >> n;
   cout << "The minimum number of bits required to represent the given number is: " << Min_Bits_Req(n) << endl;
   cout << "The binary representation of the given number is: " << Binary_Representation(n) << endl;
   cout << "The number of set bits in the given number is: " << Count_Set_Bits(n) << endl;
   cout << "The number of unset bits in the given number is: " << Count_UnSet_Bits(n) << endl;
   int pos;
   cout << "Enter the bit position to be checked: ";
   cin >> pos;
   bool check = Check_if_Set(n , pos);
   if(check == true)
   {
    cout << "The bit at the given position is set !!!" << endl;
   }
   else
   {
    cout << "The bit at the given position is unset !!!" << endl;
   }
   return 0;
}