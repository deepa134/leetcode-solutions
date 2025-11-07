class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto ch:nums)
        {
            if(map.find(ch)!=map.end())
                return true;
            else
                map[ch]++;
        }
        return false;
    }
};