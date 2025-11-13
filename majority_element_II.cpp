class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> map;
        vector<int> res;
        for(auto n:nums)
        {
            map[n]++;
        }
        for(auto p:map)
        {
            if(p.second>n/3)
            {
                res.push_back(p.first);
            }
        }
        return res;
    }
};