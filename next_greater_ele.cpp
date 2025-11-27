class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        stack<int> st;
        int n=nums2.size();
        vector<int> res;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums2[i]>st.top())
            {
                st.pop();
            }
            st.empty()?map[nums2[i]]=-1:map[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        for(auto ele:nums1)
        {
            res.push_back(map[ele]);
        }
        return res;
    }
};