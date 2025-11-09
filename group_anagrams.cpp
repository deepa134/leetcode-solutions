class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;string element;
        unordered_map<string,vector<string>> map;
        for(auto ele:strs)
        {
            element=ele;
            sort(ele.begin(),ele.end());
            
                map[ele].push_back(element);
            
        }
        for(auto p:map)
        {
            res.push_back(p.second);
        }
        return res;
    }
};