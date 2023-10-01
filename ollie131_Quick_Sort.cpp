#include<bits/stdc++.h>
using namespace std;
// My very own Quick-Sort code !!! Great isn't it !!! Iam so pumped right now !!!
void Quick_Sort(int arr[] , int start , int end)
{
    if(start >= end)
    {
        return;
    }
    int pivot = start;
    int i = start + 1 , j = end;
    while(i <= j)
    {
        if(arr[i] <= arr[pivot] && arr[j] >= arr[pivot])
        {
            i++;
            j--;
            continue;
        }
        if(arr[i] <= arr[pivot] && arr[j] < arr[pivot])
        {
            i++;
            continue;
        }
        if(arr[i] > arr[pivot] && arr[j] >= arr[pivot])
        {
            j--;
            continue;
        }
        if(arr[i] > arr[pivot] && arr[j] < arr[pivot])
        {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    swap(arr[pivot] , arr[j]);
    Quick_Sort(arr , start , j-1);
    Quick_Sort(arr , j+1 , end);
    return;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    Quick_Sort(arr , 0 , n-1);
    cout << "The array after  applying Quick_Sort: " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}