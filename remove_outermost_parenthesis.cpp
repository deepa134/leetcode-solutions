class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance=0;string res="";
        for(auto str:s)
        {
            if(str=='(')
            {
                if(balance>0)
                {
                    res+=str;
                }
                balance++;
            }
            else
            {
                balance--;
                if(balance>0)
                {
                    res+=str;
                }
            }
        }
        return res;
    }
};