class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int maxele=INT_MIN;
        vector<int> res;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>maxele)
            {
                maxele=nums[i];
                res.push_back(maxele);

            }

        }
        reverse(res.begin(),res.end());
      
    }
};