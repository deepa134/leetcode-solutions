class Solution {
public:
    string expandaround(const  string &s,int left,int right)
    {
        while(left>=0 && right<s.size() && s[left]==s[right])
        {
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        string strmax="";
        for(int i=0;i<s.size();i++)
        {
            string odd=expandaround(s,i,i);
            if(odd.size()>strmax.size())
            {
                strmax=odd;
            }
            string even=expandaround(s,i,i+1);
            if(even.size()>strmax.size())
            {
                strmax=even;
            }
        }
        return strmax;
        
    }
};