#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
	cout << endl;
}

void bubbleSort(int arr[], int size)
{
	for(int i = 0; i < size - 1; i++)
	{
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
			swap(arr[j], arr[j + 1]);
        }
        cout << "Array after " << i + 1 << " iteration: " << endl;
        printArray(arr , size);
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }
	bubbleSort(arr, size);
	cout << "Sorted array: " << endl;
	printArray(arr, size);
	return 0;
}
