class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int index=0;int ind=1;

        vector<int> res(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                res[index]=nums[i];
                index+=2;
            }
            else
            {
                res[ind]=nums[i];
                ind+=2;
            }
        }
        return res;
    }
};