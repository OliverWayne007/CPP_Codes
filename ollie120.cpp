#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int arr[2][3] = {{1,2,3} , {4,5,6}};
    cout << arr[0] << endl;
    cout << *arr[0] << endl;
    for(ll i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        cout << *arr[i] << " ";
    }
    cout << endl;
    for(auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    for(auto it : arr)
    {
        cout << *it << " ";
    }
    return 0;
}