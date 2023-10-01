#include <bits/stdc++.h>
using namespace std;

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int Partition (int arr[] , int start , int end)
{
	int pivot = arr[end]; 
	int i = (start - 1); 

	for (int j = start; j <= end - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[end]);
	return (i + 1);
}

void QuickSort(int arr[], int start, int end)
{
	if (start < end)
	{
		int par = Partition(arr, start, end);
		QuickSort(arr, start, par - 1);
		QuickSort(arr, par + 1, end);
	}
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
	QuickSort(arr, 0, n - 1);
	cout << "Sorted array in ascending order: " << endl;;
	for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
	return 0;
}
