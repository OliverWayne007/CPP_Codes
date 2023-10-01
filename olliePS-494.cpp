#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define flash() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long int MOD = 1e9 + 7;
const long long int INF = 1e18;
const long long int MAX = 1e9;

int solution(int A[] , int N , int X , int Y)
{
   int ans = INT_MAX , curr = 0;
   for(int i = 0 ; i < N ; i++)
   {
      for(int j = 0 ; j < X ; j++)
      {
         if(i + j * Y >= N)
         {
            curr = INT_MAX;
            break;
         }
         curr += A[i + j * Y];
      }
      ans = min(ans , curr);
      curr = 0;
   }
   return ans;
}

void Solution(ll T)
{
   int X , Y , N;
   cout << "Enter the value of N: ";
   cin >> N;
   cout << "Enter the values of X and Y: " << endl;
   cin >> X >> Y;
   int A[N];
   cout << "Enter the elements of the array A: " << endl;
   for(int i = 0 ; i < N ; i++)
   {
      cin >> A[i];
   }
   int ans = solution(A , N , X , Y);
   cout << ans << endl;
   return;
}

int main()
{
   //flash();
   ll tc = 1;
   ll t = 1; 
   while(t <= tc)
   {
      Solution(t);
      t++;        
   }
   return 0;
}