#include<iostream>
using namespace std;
// MERGING TWO SORTED ARRAYS !!! --------> USING TWO-POINTERS.
int main()
{
    int arr[5] = {1,2,5,7,11};
    int a[6] = {3,5,6,9,13,16};
    int array[11];
    int i = 0 , j = 0 , k = 0;
    while(i<5 && j<6)
    {
        if(arr[i]<a[j])
        {
            array[k] = arr[i];
            i++;
            k++;
        }
        else if(arr[i]>a[j])
        {
            array[k] = a[j];
            j++;
            k++;
        }
        else
        {
            array[k] = arr[i];
            array[k+1] = a[j];
            i++;
            j++;
            k = k+2;
        }

    }

    if(i<5 && j==6)
    {
        while(i<5)
        {
            array[k] = arr[i];
            i++;
            k++;
        }
    }

    else if(j<6 && i==5)
    {
        while(j<6)
        {
            array[k] = a[j];
            j++;
            k++;
        }
    }

    cout<<"The elements of the merged array are: "<<endl;
    for(int i = 0 ; i<11 ; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}