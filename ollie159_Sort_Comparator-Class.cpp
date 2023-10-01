#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

class Compare
{
    public:
    bool operator() (int num1 , int num2)
    {
        if(num1 < num2)
        {
            return false;
        }
        return true;
    }
};

void Solution(ll T)
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the numbers to be sorted in descending order: ";
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin() , nums.end() , Compare());
    for(auto it : nums)
    {
        cout << it << " ";
    }
    cout << endl;
    return;
}

int main()
{
   ll tc = 1;
   ll t = 1;
   while(t <= tc)
   {
      Solution(t);
      t++;
   }
   return 0;
}