class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> map;
        for(auto ch:nums1)
        {
            map[ch]++;
        }
        for(auto ch:nums2)
        {
           
                if(map[ch]>0)
                {
                res.push_back(ch);
                    map[ch]--;
                }
            
        }
        return res;
    }
};