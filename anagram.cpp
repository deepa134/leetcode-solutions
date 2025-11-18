class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        vector<int> a(26,0);
        vector<int> b(26,0);
        for(auto el:s) a[el-'a']++;
        for(auto ch:t) b[ch-'a']++;
       
      return a==b;  
    }
};