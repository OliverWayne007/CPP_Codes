    #include<bits/stdc++.h>
    using namespace std;

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        map<int , int> mpp;
        for(int i = 0 ; i < n ; i++)
        {
            mpp[nums2[i]] = i;
        }
        vector<int> nge(n , -1);
        stack<int> st;
        for(int i = 0 ; i < n ; i++)
        {
            while(st.empty() != true)
            {
                if(nums2[i] > st.top())
                {
                    nge[mpp[st.top()]] = nums2[i];
                    st.pop();
                }
                else
                {
                    break;
                }
            }
            st.push(nums2[i]);
        }
        while(st.empty() != true)
        {
            nge[mpp[st.top()]] = -1;
            st.pop();
        }
        vector<int> ans;
        for(auto it : nums1)
        {
            int idx = mpp[it];
            ans.push_back(nge[idx]);
        }
        return ans;
    }

    int main()
    {
        int n , m;
        cout << "Enter the size of nums2: ";
        cin >> n;
        vector<int> nums2 , nums1;
        cout << "Enter the elements of nums2: " << endl;
        for(int i = 1 ; i <= n ; i++)
        {
            int x;
            cin >> x;
            nums2.push_back(x);
        }
        cout << "Enter the size of nums1: ";
        cin >> m;
        cout << "Enter the elements of nums1: " << endl;
        for(int i = 1 ; i <= m ; i++)
        {
            int x;
            cin >> x;
            nums1.push_back(x);
        }
        vector<int> nge = nextGreaterElement(nums1 , nums2);
        for(auto it : nge)
        {
            cout << it << " ";
        }
        cout << endl;
        return 0;
    }