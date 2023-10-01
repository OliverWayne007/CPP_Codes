#include<iostream>
using namespace std;
// TO FIND TWO INTEGERS THAT MULTIPLY TO 20.
int main()
{
   // int arr[7] = {2,4,1,6,5,10,20};
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }

    cout<<"The pair of integers that multiply to 20 are: "<<endl;
    int count = 0;
    for(int i = 0 ; i<6 ; i++)
    {
        for(int j = i+1 ; j<7 ; j++)
        {
            if(arr[i]*arr[j]==20)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                count = count + 1;
            }
        }
    } 

    if(count==0)
    {
        cout<<"NO SUCH PAIR OF INTEGERS EXISTS !!! "<<endl;
    }

    return 0;

}