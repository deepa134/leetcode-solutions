class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int s=n/2;
        unordered_map<int,int> map;
        for(auto ch:nums)
        {
            map[ch]++;
        }
        for(auto p:map)
        {
            if(p.second>s)
            {
                return p.first;
            }
        }
        return {};
    }
};