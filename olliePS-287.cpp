#include<bits/stdc++.h>
using namespace std;
// MERGE SORT ----- REVISITED !!!
void Merge(int arr[] , int low , int mid , int high)
{
    int i = low , j = mid + 1;
    vector<int> marr;
    while(i <= mid && j <= high)
    {
        if(arr[i] > arr[j])
        {
            marr.push_back(arr[j]);
            j++;
        }
        else
        {
            marr.push_back(arr[i]);
            i++;
        }
    }
    while(i <= mid)
    {
        marr.push_back(arr[i]);
        i++;
    }
    while(j <= high)
    {
        marr.push_back(arr[j]);
        j++;
    }
    for(int k = 0 ; k < marr.size() ; k++)
    {
        arr[k + low] = marr[k];
    }
    return;
}

void MergeSort(int arr[] , int low , int high)
{
    if(low == high)
    {
        return;
    }
    int mid = (low + high)/2;
    MergeSort(arr , low , mid);
    MergeSort(arr , mid + 1 , high);
    Merge(arr , low , mid , high);
    return;
}

void PrintArray(int arr[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array to be sorted: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr , 0 , n-1);
    cout << "The sorted array is: " << endl;
    PrintArray(arr , n);
    return 0;
}