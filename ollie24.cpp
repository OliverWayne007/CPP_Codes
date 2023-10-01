#include<iostream>
using namespace std;
// TO FIND THE SUM OF ALL THE ELEMENTS OF ALL THE SUB-ARRAYS OF A GIVEN ARRAY.
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }

    int sum = 0;
    for(int i = 0 ; i<n ; ++i)
    {
        for(int j = i ; j<n ; ++j)
        {
           for(int k = i ; k<=j ; ++k)
           {
               sum = sum + arr[k];
           }
        }
    }

    cout<<"The sum of all the elements of all the sub-arrays is: "<<sum<<endl;
    return 0;
}