class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();int res;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            res=target-nums[i];
            if(map.find(res)!=map.end())
            {
                return {i,map[res]};
            }
            else
            {
                map[nums[i]]=i;
            }
        }
        return {};
    }
};