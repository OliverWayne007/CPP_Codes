#include<iostream>
using namespace std;
// Binary Search using do-while loop !!! ..... Iterative Method.
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value of key: ";
    cin>>key;
    int low = 0  , end = n-1;
    int mid;
    bool check = false;
    do
    {
        mid = (low+end)/2;
        //check = false;
        if(arr[mid]==key)
        {
            check=true;
            break;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            low = mid+1;
        }

     } while (end>=low);

     if(check==true)
     {
         cout<<"The required index is: "<<mid<<endl;
     }

     else
     {
         cout<<"No such element exists in the array !!!"<<endl;
     }

    return 0;
}

