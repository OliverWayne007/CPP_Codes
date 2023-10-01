#include<bits/stdc++.h>
using namespace std;
// EVALUATING GCD USING THE INBUILT _gcd(n,m) FUNCTION !!!
int main()
{
    int n , m;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of m: ";
    cin>>m;
    int hcf = __gcd(n,m);  // USING THE INBUILT GCD FUNCTION TO EVALUATE THE GCD OF TWO NON-NEGATIVE NUMBERS 
    cout<<"The gcd of "<<n<<" and "<<m<<" is: "<<hcf<<endl;
    return 0;
}