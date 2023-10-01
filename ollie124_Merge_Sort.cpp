#include<bits/stdc++.h>
using namespace std;
// Merge Sort
void PrintArray(int arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

void M_2_SA(int arr[] , int low , int high , int mid)
{
    int i = low , j = mid+1 , k = 0 , size = (high - low) + 1;
    int b[size];
    while(i <= mid && j <= high)   
    {
        if(arr[i] < arr[j])
        {
           b[k] = arr[i];
           i++;
           k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while(j <= high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    for(int idx = 0 ; idx < size ; idx++)  
    {      
        arr[idx + low] = b[idx];
    }   
    return;
}



void MergeSort(int arr[] , int low , int high)
{
    int mid = (low + high)/2;
    if(low < high)
    {
        MergeSort(arr , low , mid);
        MergeSort(arr , mid + 1 , high);
        M_2_SA(arr , low , high , mid);
    }
   return;
}



int main()
{
    int arr[10] = {10 , 9 , 5 , 6 , 8 , 7 , 1 , 4 , 2 , 3};
    int n = 10;
    PrintArray(arr , 10);
    MergeSort(arr , 0 , n-1);
    PrintArray(arr , 10);
    return 0;
}
