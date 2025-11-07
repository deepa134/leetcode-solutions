class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res=0;
        for(auto ch:nums)
        {
            res^=ch;
        }
        return res;
    }
};