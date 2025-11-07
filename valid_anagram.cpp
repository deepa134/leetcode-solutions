class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        if(s.size()!=t.size())
            return false;
        for(auto ch:s)
        {
            v1[ch-'a']++;
        }
        for(auto ch:t)
        {
            v2[ch-'a']++;
        }
        if(v1==v2)
            return true;
        else
            return false;
    }
};