#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

void OtoN(int n){
    if(n == 1){
        cout<<n<<" ";
        return;
    }
    OtoN(n-1);
    cout<<n<<" ";
    return;
}

void Solution(ll T)
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    OtoN(num);
}

int main()
{
   //flash();
   ll tc;
   cin >> tc;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}