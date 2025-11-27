class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> map={
            {')','('},
            {']','['},
            {'}','{'},
        };
        for(auto ch:s)
        {
            if(map.count(ch))
            {
                if(st.empty() || st.top()!=map[ch] )
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                st.push(ch);
            }
        }
      return st.empty();  
    }
};