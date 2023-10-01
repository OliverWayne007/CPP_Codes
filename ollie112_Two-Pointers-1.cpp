#include<iostream>
using namespace std;
// GIVEN A SORTED ARRAY FIND ALL SUCH PAIR OF ELEMENTS WHOSE SUM IS EQUAL TO K -----> USING TWO-POINTERS !!!

/* -------------------------------------------------- NOTE ------------------------------------------------------------------------ */
// The two-pointers approach works efficiently only when all the elements of the array are distinct and the the array is sorted.
// In the following code, the two-pointers method fails to find the pair (2,8) which also yeilds the required sum. This is because
// in the following code, all the elements of the input array are not distinct, the element 3 occurs twice.

int main()
{
    int arr[10] = {2,3,3,5,9,11,12,18,20,21};
    int target = 23;
    int start = 0 , end = 9;
    bool check = false;
    while(start<end)
    {
        int sum = arr[start] + arr[end];
        if(sum>target)
        {
            end--;
        }
        else if(sum<target)
        {
            start++;
        }
        else
        {
            check = true;
            cout<<start<<" "<<end<<endl;
            start++;
            end--;
        }
    }

    if(check == false)
    {
        cout<<"NO SUCH PAIR EXISTS !!!"<<endl;
    }

    return 0;
}