class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> s_index;
        unordered_map<char,int> t_index;

        for(int i=0;i<s.size();i++)
        {
            if(s_index.find(s[i])==s_index.end())
            {
                s_index[s[i]]=i;
            }
            if(t_index.find(t[i])==t_index.end())
            {
                t_index[t[i]]=i;
            }
            if(s_index[s[i]]!=t_index[t[i]])
            {
                return false;
            }
        }
        return true;
    }
};