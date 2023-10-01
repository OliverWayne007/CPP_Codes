#include<bits/stdc++.h>
using namespace std;
// Fucking Merge Sort Yet Again !!!
void Merge_Sort(int arr[] , int start , int end)
{
    if(start == end)
    {
        return;
    }
    int mid = (start + end)/2;
    Merge_Sort(arr , start , mid);
    Merge_Sort(arr , mid + 1 , end);
    int s1 = start , s2 = mid + 1 , e1 = mid , e2 = end;
    vector<int> ans;
    while(s1 <= e1 && s2 <= e2)
    {
        if(arr[s1] <= arr[s2])
        {
            ans.push_back(arr[s1]);
            s1++;
            continue;
        }
        if(arr[s2] < arr[s1])
        {
            ans.push_back(arr[s2]);
            s2++;
            continue;
        }
    }
    while(s1 <= e1)
    {
        ans.push_back(arr[s1]);
        s1++;
    }
    while(s2 <= e2)
    {
        ans.push_back(arr[s2]);
        s2++;
    }
    for(int i = 0 ; i < ans.size() ; i++)
    {
        arr[start + i] = ans[i];
    }
    return;
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
    Merge_Sort(arr , 0 , size-1);
    cout << "Array after applying Merge Sort: " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}