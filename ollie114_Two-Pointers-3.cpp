#include <bits/stdc++.h>
using namespace std;
// GIVEN AN ARRAY SORTED IN INCREASING ORDER, RETURN AN ARRAY CONTAINING THE SQUARE OF THE ELEMENTS OF THE GIVEN ARRAY
// IN INCREASING ORDER.
vector<int> sortedSquares(vector<int>& nums) {
      int i = 0 , j = nums.size()-1 , k = nums.size()-1;
        vector<int>arr(nums.size());
        while(k>=0)
        {
            if(i==j)
            {
                arr[k] = nums[i]*nums[i];
            }
            if(abs(nums[i])>abs(nums[j]))
            {
                arr[k] = nums[i]*nums[i];
                i++;
                k--;
            }
            if(abs(nums[i])<abs(nums[j]))
            {
                arr[k] = nums[j]*nums[j];
                j--;
                k--;
            }
            if(abs(nums[i])==abs(nums[j]))
            {
                arr[k] = nums[i]*nums[i];
                arr[k-1] = nums[j]*nums[j];
                i++;
                j--;
                k = k-2;
            }
        }
        return arr;
    }
    
int main()
{
    vector<int>vect = {-7,-3,2,3,11};
    vector<int>v = sortedSquares(vect);
    for(auto it = v.begin() ; it!=v.end() ; it++)
    {
        cout<<(*it)<<" ";
    }
    return 0;
}
