#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[] , int first , int last)
{
    for(int i = first + 1 ; i < last + 1 ; i++)
	{
        int val = arr[i];
        int j = i;
	    while (j > first && arr[j-1] > val)
	    {
            arr[j] = arr[j-1];
            j -= 1;
	    }
        arr[j] = val;
	}
}

int Partition(int arr[] , int first , int last)
{
    int pivot = arr[last];
    int i , j;
    i = first;
    j = first;

    for(int i = first ; i < last ; i++)
    {
	    if(arr[i] < pivot)
	    {
            int temp = arr[i];
	        arr[i] = arr[j];
	        arr[j] = temp;
	        j += 1;
	    }
    }

	int temp = arr[j];
	arr[j] = arr[last];
	arr[last] = temp;

    return j;
}

void Quick_Sort(int arr[] , int first , int last)
{
    if(first < last)
    {
	    int pivot = Partition(arr , first , last);
	    Quick_Sort(arr , first , pivot - 1) ;
	    Quick_Sort(arr , pivot + 1 , last) ;
    }
}

// Hybrid function is a combination of  Quick and Insertion sort
void Hybrid_QuickSort(int arr[] , int first , int last)
{
    while(first < last)
    {

	    // If the size of the array is less
	    // than 10 apply insertion sort
	    // and stop recursion

	    if(last - first + 1 < 10)
	    {
            Insertion_Sort(arr , first , last);
            break;
	    }
        else
	    {
		    int pivot = Partition(arr , first , last) ;
	        if(pivot - first < last - pivot)
		    {
		        Hybrid_QuickSort(arr , first , pivot - 1);
		        first = pivot + 1;
	        }
	        else
	        {
		        Hybrid_QuickSort(arr , pivot + 1 , last);
		        last = pivot - 1;
	        }

        }

    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }
    Hybrid_QuickSort(arr, 0, size - 1);
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
