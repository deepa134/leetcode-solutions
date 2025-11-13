class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0]=1;
        int currsum=0;
        int count=0;
        int prefixsum;
        for(int i=0;i<nums.size();i++)
        {
            currsum+=nums[i];
            prefixsum=currsum-k;
            if(map.find(prefixsum)!=map.end())
            {
                count+=map[prefixsum];
            }
            map[currsum]++;

        }
        return count;
    }
};