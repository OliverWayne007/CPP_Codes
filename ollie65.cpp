#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int p = 0;
    
    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = i ; j<=(i*2)-1 ; j++)
        {
          cout<<p;
          p++;
        // for(int k = i ; k<n ; k++)
        // {
        //     cout<<" ";
        // }
        
        }
        
        cout<<endl;
    }
    
    return 0;
}