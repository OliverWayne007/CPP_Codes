#include<bits/stdc++.h>
using namespace std;
// GIVEN A SORTED ARRAY FIND ALL SUCH PAIR OF ELEMENTS WHOSE SUM IS CLOSEST TO TARGET -----> USING TWO-POINTERS !!!

/* -------------------------------------------------- NOTE ------------------------------------------------------------------------ */
// By using the two-pointers method, without using hash-map, we can only find one pair of elements whose sum is closest to target.
// In the following code, we get only (5,7) as the answer although there are other pairs as well which yield a sum closest to target.

int main()
{
    int arr[10] = {2,3,3,5,9,11,12,18,20,21};
    int target = 28;
    int i = 0 , j = 9 , min_diff = INT_MAX , index1 , index2;
    while(i<j)
    {
        int sum = arr[i] + arr[j];
        int diff = abs(sum-target);
        min_diff = min(min_diff,diff);
        if(min_diff == diff)
        {
            index1 = i , index2 = j;
        }
        else
        {
            index1 = index1;
            index2 = index2;
        }
        if(sum<target)
        {
            i++;
        }
        else if(sum>target)
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }

    cout<<index1<<" "<<index2<<endl;
    return 0;
}